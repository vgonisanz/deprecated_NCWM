#include "ncwm_manager.h"

int main()
{
	NcwmManager manager;

	Rect rect;
	rect.x = 5;
	rect.y = 5;
	rect.width = 20;
	rect.height = 20;

	std::shared_ptr<Frame> frame(new Frame(rect, manager.get_size(), true, true));
	manager.add_frame(frame);
/*
	Rect rect2;
	rect2.x = 15;
	rect2.y = 15;
	rect2.width = 25;
	rect2.height = 25;

	std::shared_ptr<Frame> frame2(new Frame(rect, manager.get_size(), true, true));
	manager.add_frame(frame2);
*/
	manager.run();
	return 0;
}
