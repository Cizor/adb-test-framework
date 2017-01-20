#ifndef HEAD_LABEL_H
#define HEAD_LABEL_H

#include <InfoLabel.h>

class HeadLabel: public InfoLabel
{
	public:
		HeadLabel();
		virtual ~HeadLabel();

		virtual void text(std::string);
		virtual void align(int);
		virtual void width(int);
};

#endif
