#ifndef VERTICAL_SEPARATOR_H
#define VERTICAL_SEPARATOR_H

#include <BasicSeparator.h>

class VerticalSeparator:public BasicSeparator
{
	public:
		VerticalSeparator();
		virtual ~VerticalSeparator();

		virtual void orientation(int);
};

#endif
