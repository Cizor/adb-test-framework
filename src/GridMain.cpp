#include <GridMain.h>
#include <GridInfo.h>
#include <GridReport.h>
#include <InfoLabel.h>
#include <HeadLabel.h>
#include <DataLabel.h>
#include <VerticalSeparator.h>

#define HEADING_WIDTH 40

GridMain::GridMain()
{
	std::cout<<"I am GridMain Constructor"<<std::endl;
	insert_row(1);
	insert_row(2);
	set_row_spacing(10);

	GridInfo *g = new GridInfo;
	GridReport *r = new GridReport;

	HeadLabel *i = new HeadLabel;
	i->text("Heading");
	i->align(Gtk::JUSTIFY_CENTER);
	i->width(HEADING_WIDTH);
	
	VerticalSeparator *v = new VerticalSeparator;
	v->orientation(Gtk::ORIENTATION_VERTICAL);

	attach(*i,0,1,1,1);
	attach(*g,0,2,2,2);

	attach_next_to(*v,*g,Gtk::POS_RIGHT,2,1);

	attach_next_to(*r,*v,Gtk::POS_RIGHT,2,1);

	
}

GridMain::~GridMain()
{
	std::cout<<"I am GridMain Destructor"<<std::endl;
}
