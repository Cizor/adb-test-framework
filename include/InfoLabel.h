#ifndef INFO_LABEL_H
#define INFO_LABEL_H

#include <gtkmm/label.h>
#include <iostream>

class InfoLabel: public Gtk::Label
{
	public:
		InfoLabel();
		virtual ~InfoLabel();
		virtual void text(std::string)=0;
		virtual void align(int)=0;
		virtual void width(int)=0;
};

#endif
