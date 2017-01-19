#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <MainWindow.h>
#include <iostream>

int main(int argc, char *argv[])
{
	//Created a window
	auto app = 	Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");
	
	MainWindow mainWindow;

	return app->run(mainWindow);
}

