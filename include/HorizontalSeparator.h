#ifndef HORIZONTAL_SEPARATOR_H
#define HORIZONTAL_SEPARATOR_H

#include <BasicSeparator.h>

class HorizontalSeparator:public BasicSeparator
{
	public:
		HorizontalSeparator();
		virtual ~HorizontalSeparator();

		virtual void orientation(int);
};

#endif
