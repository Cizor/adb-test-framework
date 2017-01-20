#include <DataLabel.h>

DataLabel::DataLabel()
{
}

DataLabel::~DataLabel()
{
}

void DataLabel::text(std::string name)
{
	set_text(name);
}

void DataLabel::align(int pos)
{
	set_justify((Gtk::Justification)pos);
}

void DataLabel::width(int length)
{
	set_width_chars(length);
}
