#pragma once
#include <vector>
#include "Curve.hpp"
namespace curve {
class VectorGenerator {
  typedef std::unique_ptr<Curve> CurvePtr;

 public:
  explicit VectorGenerator(const int& upperBound);
  ~VectorGenerator() = default;

 private:
  std::vector<CurvePtr> data;
  int size;
};
}  // namespace curve