#include <iostream>

class Point {
private:
  int x_, y_;
public:
  int x() { return x_; }
  void set_x(int x) { x_ = x; }
  int y() { return y_; }
  void set_y(int y) { y_ = y; }
};

void display_horizontal_distance(Point p1, Point p2) {
  int distance = p1.x() - p2.x();
  std::cout << "The horizontal distance between the two points is: "
       << distance << "\n";
}

int main() {
  Point start, end;
  start.set_x(3);
  start.set_y(4);

  end.set_x(6);
  end.set_y(4);

  display_horizontal_distance(end, start);
  return 0;
}
