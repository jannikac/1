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

bool window::exit() { return true; }

void draw_something(window w, int *b){};

void run() {
  int *a = new int(5);
  int *b;
  window w(1920, 1080);
  while (!w.exit()) {
    b = new int(1);
    draw_something(w, b);
  }
  delete b;
}

void c3() {
  float f = 5.0f;
  float *ptr_f = &f;
  int *ptr_i = (int *)&f;

  std::cout << "f hat Hex-Wert: " << std::hex << *ptr_i;
  *ptr_f = 10.0f;
  std::cout << "f hat Hex-Wert: " << std::hex << *ptr_i;
}

int &dead_meat() {
  int *meat = new int(15);
  delete meat;
  return *meat;
}

void print_meat(const int &meat) { std::cout << "Always valid: " << meat; }

int main() { return 0; }
