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

void display_horizontal_distance(point p1, point p2) {
  int distance = p1.x() - p2.x();
  cout << "The horizontal distance between the two points is: "
       << distance << "\n";
}

int main() {
  point start, end;
  start.set_x(3);
  start.set_y(4);

  end.set_x(6);
  end.set_y(4);

  display_horizontal_distance(end, start);
  return 0;
}
