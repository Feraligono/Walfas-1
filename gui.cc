#ifndef MASTERLIST
#include "includes/gui.h"
#endif

void gui::setWindowSize(int length, int width)
{
        window.set_default_size(length,width);
}

void gui::runIt()
{
        app->run(window);
}
