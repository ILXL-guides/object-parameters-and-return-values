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

```

In the example above, we see that two `point` objects are passed to the `display_horizontal_distance` function. We are able to access all public data members and methods of each `point` parameter from inside the function. Specifically, we use the `x()` methods of `p1` and `p2` then use them to compute the distance.

# Returning objects
Objects can also be used as return types. You can imagine that this allows us to create objects from within the function and return them.

```cpp
point get_middle(point p1, point p2) {
  int mid_x = p2.x() - p1.x();
  int mid_y = p2.y() - p1.y();
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
```

In the example above, we use the two `point` parameters to find the x and y location between them. We use these values to create another `point` object whose location is the mid point.
