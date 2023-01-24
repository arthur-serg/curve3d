#pragma once
#include <math.h>
#include "Curve.hpp"
namespace curve {

class Ellipse : public Curve {
 public:
  Ellipse(const double& a, const double& b, const double& t);
  std::string getName() const override;
  Point getValue(const double& t) const override;
  Point getDerivative(const double& t) const override;
  virtual ~Ellipse();

 private:
  //Ellipse* ellipse;
  double a;
  double b;
  double t;
};

}  // namespace curve
