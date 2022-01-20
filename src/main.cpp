#include <iostream>

class window {
  public:
    int width;
    int height;
    window(int x, int y) {
      height = x;
      width = y;
    };
    bool exit();
};

bool window::exit() {
  return true;
}

void draw_something(window w, int *b) {};

void run()
{
  int* a = new int(5);
  int* b;
  window w(1920, 1080);
  while (!w.exit()) {
    b = new int(1);
    draw_something(w, b);
  }
  delete b;
}

int main()
{
  run();
}