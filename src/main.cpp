#include <iostream>
#include <gtkmm.h>

#include "window.h"

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("dev.gregar.gmtools");

  return app->make_window_and_run<MyWindow>(argc, argv);
}
