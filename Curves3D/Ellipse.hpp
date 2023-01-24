#pragma once
#include <math.h>
#include "Curve.hpp"
namespace curve {

class Ellipse : public Curve {
 public:
  Ellipse(const double& a, const double& b);
  std::string getName() const override;
  Point getValue(const double& t) const override;
  Point getDerivative(const double& t) const override;
  virtual ~Ellipse();

 private:
  double a;
  double b;
};

}  // namespace curve
