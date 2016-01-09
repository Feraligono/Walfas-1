#ifndef __gtkmm
#define __gtkmm
#include<gtkmm.h>
#endif

class gui {
        public:
                gui(int argcount, char **argvar):argc(argcount), argv(argvar){}
                void setWindowSize(int length, int widith);
                void runIt();
        private:
                int argc;
                char **argv;
                Glib::RefPtr<Gtk::Application> app =
                        Gtk::Application::create(argc,argv,
                        "org.gtkmm.examples.base");
                Gtk::Window window;
};
