#include <HeadLabel.h>

HeadLabel::HeadLabel()
{
}

HeadLabel::~HeadLabel()
{
}

void HeadLabel::text(std::string name)
{
	set_text(name);
}

void HeadLabel::align(int pos)
{
	set_justify((Gtk::Justification)pos);
}

void HeadLabel::width(int length)
{
	set_width_chars(length);
}
