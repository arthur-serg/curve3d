#pragma once
namespace curve {
class Point {
 public:
  Point(const double& x, const double& y, const double& z);
  Point() = default;
  ~Point() = default;
  void print() const;
  double getX() const { return x; }
  double getY() const { return y; }
  double getZ() const { return z; }

 private:
  double x;
  double y;
  double z;
};

}  // namespace curve