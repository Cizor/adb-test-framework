#include <GridReport.h>
#include <HeadLabel.h>

GridReport::GridReport(){
	insert_row(1);
	insert_row(2);
	HeadLabel *h = new HeadLabel;
	h->text("Report");
	h->align(Gtk::JUSTIFY_CENTER);
	h->width(50);
	attach(*h,0,1,1,1);
}
GridReport::~GridReport(){
	std::cout<<"I am GridReport destructor"<<std::endl;
}
