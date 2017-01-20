#ifndef DATA_LABEL_H
#define DATA_LABEL_H

#include <InfoLabel.h>

class DataLabel: public InfoLabel
{
	public:
		DataLabel();
		virtual ~DataLabel();

		virtual void text(std::string);
		virtual void align(int);
		virtual void width(int);
};

#endif
