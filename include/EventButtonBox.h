#ifndef EVENT_BUTTONBOX_H
#define EVENT_BUTTONBOX_H

#include <gtkmm/buttonbox.h>
#include <iostream>

class EventButtonBox: public Gtk::ButtonBox
{
	public:
		EventButtonBox();
		virtual ~EventButtonBox();
};

#endif
