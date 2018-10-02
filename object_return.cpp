#include <iostream>
using namespace std;

class point {
private:
  int _x, _y;
public:
  int x() { return _x; }
  void set_x(int x) { _x = x; }
  int y() { return _y; }
  void set_y(int y) { _y = y; }
};

point get_middle(point p1, point p2) {
  // Find distance between p1 and p2's x coordinates to find the middle and add
  // to the starting point to find the midpoint
  int mid_x = (p2.x() - p1.x()) / 2 + p1.x();

  // Use the same formula as above by use y coordinates
  int mid_y = (p2.y() - p1.y()) /2 + p1.y();
  
  point mid_point;
  mid_point.set_x(mid_x);
  mid_point.set_y(mid_y);
  return mid_point;
}

int main() {
  point start, end;
  start.set_x(3);
  start.set_y(4);

  end.set_x(6);
  end.set_y(4);

  point mid = get_middle(start, end);
  cout << "Mid point is at " << mid.x() << ", " << mid.y() << "\n";
  return 0;
}
