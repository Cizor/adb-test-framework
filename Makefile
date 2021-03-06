#g++ test.cpp -o simple `pkg-config gtkmm-3.0 --cflags --libs` --std=c++11
CXX=g++
FILE= src/main.cpp \
		src/GridInfo.cpp \
		src/GridReport.cpp \
		src/GridModules.cpp \
		src/GridMain.cpp \
		src/EventButton.cpp \
		src/EventButtonBox.cpp \
		src/MainWindow.cpp \
		src/InfoLabel.cpp \
		src/HeadLabel.cpp \
		src/DataLabel.cpp \
		src/BasicSeparator.cpp \
		src/HorizontalSeparator.cpp \
		src/VerticalSeparator.cpp 
		
FILE_INCLUDE= -Iinclude \
				include/GridInfo.h \
				include/GridReport.h \
				include/GridModules.h \
				include/GridMain.h \
				include/EventButton.h \
				include/EventButtonBox.h \
				include/MainWindow.h \
				include/HeadLabel.h \
				include/InfoLabel.h \
				include/DataLabel.h \
				include/BasicSeparator.h \
				include/HorizontalSeparator.h \
				include/VerticalSeparator.h 
EXE= -o app
CXX_OPTIONS= `pkg-config gtkmm-3.0 --cflags --libs` --std=c++11

default : all

all:
	$(CXX) $(FILE) $(FILE_INCLUDE) $(EXE) $(CXX_OPTIONS) 
