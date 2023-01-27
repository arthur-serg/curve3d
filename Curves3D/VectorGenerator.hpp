#pragma once
#include <vector>
#include "Circle.hpp"
#include "Curve.hpp"
#include "Ellipse.hpp"
#include "Helix.hpp"
namespace curve {
class VectorGenerator {
  typedef std::shared_ptr<Curve> CurvePtr;

 public:
  explicit VectorGenerator(const int& size);
  ~VectorGenerator() = default;
  void printValues(const double& t);
  void printDerivatives(const double& t);

 private:
  std::vector<CurvePtr> data;
  int size;
};
}  // namespace curve