#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm/window.h>
#include <iostream>

class MainWindow:public Gtk::Window
{
	public:
		MainWindow();
		virtual ~MainWindow();
};

#endif
