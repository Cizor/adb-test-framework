#ifndef INFO_LABEL_H
#define INFO_LABEL_H

#include <gtkmm/label.h>
#include <iostream>

class InfoLabel: public Gtk::Label
{
	public:
		InfoLabel();
		virtual ~InfoLabel();
};

#endif
