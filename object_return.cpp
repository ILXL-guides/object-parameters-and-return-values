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

Point get_middle(Point p1, Point p2) {
  // Find distance between p1 and p2's x coordinates to find the middle and add
  // to the starting point to find the midpoint
  int mid_x = (p2.x() - p1.x()) / 2 + p1.x();

  // Use the same formula as above by use y coordinates
  int mid_y = (p2.y() - p1.y()) / 2 + p1.y();

  Point mid_point;
  mid_point.set_x(mid_x);
  mid_point.set_y(mid_y);
  return mid_point;
}

int main() {
  Point start, end;
  start.set_x(3);
  start.set_y(4);

  end.set_x(6);
  end.set_y(4);

  Point mid = get_middle(start, end);
  std::cout << "Mid point is at " << mid.x() << ", " << mid.y() << "\n";
  return 0;
}
