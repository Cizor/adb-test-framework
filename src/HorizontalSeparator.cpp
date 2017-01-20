#include <HorizontalSeparator.h>

HorizontalSeparator::HorizontalSeparator()
{
}

HorizontalSeparator::~HorizontalSeparator()
{
}

void HorizontalSeparator::orientation(int pos)
{
	set_orientation((Gtk::Orientation)pos);
}
