#include <GridInfo.h>
#include <DataLabel.h>

GridInfo::GridInfo(){
	std::cout<<"I am GridInfo constructor"<<std::endl;
	insert_row(1);
	insert_row(2);
	set_row_spacing(5);

	DataLabel *b = new DataLabel;
	b->text("Build version");
	b->align(Gtk::JUSTIFY_CENTER);
	b->width(20);
	attach(*b,0,1,1,1);

	DataLabel *bN = new DataLabel;
	bN->text("0.0.0.0");
	bN->align(Gtk::JUSTIFY_CENTER);
	bN->width(20);
	attach(*bN,1,1,1,1);

	DataLabel *d = new DataLabel;
	d->text("Device Number");
	d->align(Gtk::JUSTIFY_CENTER);
	d->width(20);
	attach(*d,0,2,1,1);

	DataLabel *dN = new DataLabel;
	dN->text("123456789");
	dN->align(Gtk::JUSTIFY_CENTER);
	dN->width(20);
	attach(*dN,1,2,1,1);
}

GridInfo::~GridInfo(){
	std::cout<<"I am GridInfo destructor"<<std::endl;
}
