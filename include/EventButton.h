#ifndef EVENT_BUTTON_H
#define EVENT_BUTTON_H

#include <gtkmm/button.h>
#include <iostream>

class EventButton:public Gtk::Button
{
	public:
		EventButton();
		virtual ~EventButton();
};

#endif
