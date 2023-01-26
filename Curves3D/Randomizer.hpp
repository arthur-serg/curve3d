#pragma once
#include <random>
namespace curve {

class RandomDouble {
 public:
  RandomDouble(const double& distributionUpperBound);
  double getValue() { return outValue; }
  ~RandomDouble() = default;

 private:
  double outValue;
};
}  // namespace curve