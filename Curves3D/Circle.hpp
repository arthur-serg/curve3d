#pragma once
#include <math.h>
#include "Curve.hpp"
namespace curve {
class Circle : public Curve {
 public:
  Circle(const double& radius);
  std::string getName() const override;
  Point getValue(const double& t) const override;
  Point getDerivative(const double& t) const override;
  virtual ~Circle();

 private:
  double radius;
};
}  // namespace curve