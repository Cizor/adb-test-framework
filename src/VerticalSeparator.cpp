#include <VerticalSeparator.h>

VerticalSeparator::VerticalSeparator()
{
}

VerticalSeparator::~VerticalSeparator()
{
}

void VerticalSeparator::orientation(int pos)
{
	set_orientation((Gtk::Orientation)pos);
}
