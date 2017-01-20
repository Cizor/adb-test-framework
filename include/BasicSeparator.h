#ifndef BASIC_SEPARATOR_H
#define BASIC_SEPARATOR_H

#include <gtkmm/separator.h>

class BasicSeparator:public Gtk::Separator
{
	public:
		BasicSeparator();
		virtual ~BasicSeparator();

		virtual void orientation(int) = 0;
};

#endif
