# Passing objects as parameters
Objects can be passed as parameters much like how we pass primitive data types. The difference is that because an object is passed, the function also has access to its public data members and methods.

```cpp
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

```

In the example above, we see that two `Point` objects are passed to the `display_horizontal_distance` function. We are able to access all public data members and methods of each `Point` parameter from inside the function. Specifically, we use the `x()` methods of `p1` and `p2` then use them to compute the distance.

# Returning objects
Objects can also be used as return types. You can imagine that this allows us to create objects from within the function and return them.

```cpp
Point get_middle(Point p1, Point p2) {
  // Find distance between p1 and p2's x coordinates to find the middle and add
  // to the starting point to find the midpoint
  int mid_x = (p2.x() - p1.x()) / 2 + p1.x();

  // Use the same formula as above by use y coordinates
  int mid_y = (p2.y() - p1.y()) /2 + p1.y();

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
  cout << "Mid point is at " << mid.x() << ", " << mid.y() << "\n";
  return 0;
}
```

In the example above, we use the two `Point` parameters to find the x and y location between them. We use these values to create another `Point` object whose location is the mid point.
