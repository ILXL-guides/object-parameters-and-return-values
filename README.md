# Passing objects as parameters
Objects can be passed as parameters much like how we pass primitive data types. The difference is that because an object is passed, the function also has access to its public data members and methods.

```cpp
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
  cout << "The horizontal distance between the two points is: " << distance;
}

int main() {
  point start, end;
  start.set_x(3);
  start.set_y(4);
  
  end.set_x(6);
  end.set_y(4);
  
  display_horizontal_distance(start, end);
  return 0;
}

```

In the example above, we see that two `point` objects are passed to the `display_horizontal_distance` function. We are able to access all public data members and methods of each `point` parameter from inside the function. Specifically, we use the `x()` methods of `p1` and `p2` then use them to compute the distance.
