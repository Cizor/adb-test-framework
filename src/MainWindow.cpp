#include <MainWindow.h>
#include <GridMain.h>

MainWindow::MainWindow()
{
	std::cout<<"I am MainWindow constructor"<<std::endl;	
	GridMain *g = new GridMain;
	add(*g);
	show_all_children();

}
MainWindow::~MainWindow()
{
	std::cout<<"I am MainWindow destructor"<<std::endl;	
}
