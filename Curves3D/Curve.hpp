#pragma once
#include "Point.hpp"

namespace curve {

class Curve {
 public:
  virtual Point getValue(const double& t) const = 0;
  virtual Point getDerivative(const double& t) const = 0;
};
}  // namespace curve