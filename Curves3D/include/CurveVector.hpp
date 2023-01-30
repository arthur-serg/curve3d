#pragma once
#include <vector>
#include "include/Circle.hpp"
#include "include/Curve.hpp"
#include "include/Ellipse.hpp"
#include "include/Helix.hpp"
namespace curve {
class CurveVector {
  typedef std::shared_ptr<Curve> CurvePtr;

 public:
  explicit CurveVector(const int& size);
  ~CurveVector() = default;
  void printValues(const double& t);
  void printDerivatives(const double& t);
  std::vector<CurvePtr> getData() { return data; }
  std::vector<CurvePtr> getCircles();
 private:
  bool isCircle(const curve::Curve& curve);
  std::vector<CurvePtr> data;
  std::vector<CurvePtr> circles;
  std::vector<std::shared_ptr<Ellipse>> ellipses;
  std::vector<std::shared_ptr<Helix>> helixes;
  int size;
};
}  // namespace curve