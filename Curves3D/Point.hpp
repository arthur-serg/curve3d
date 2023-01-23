#pragma once
namespace curve {
class Point {
 public:
  Point(const double& x, const double& y, const double& z);
  Point() = default;
  ~Point() = default;
  void print() const;

 private:
  double x;
  double y;
  double z;
};

}  // namespace curve