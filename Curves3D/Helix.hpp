#pragma once
#include "Curve.hpp"
namespace curve {
class Helix : public Curve {
 public:
  Helix(const double& radius, const double& step, const double& t);
  std::string getName() const override;
  Point getValue(const double& t) const override;
  Point getDerivative(const double& t) const override;
  virtual ~Helix();

 private:
  double radius;
  double step;
  double t;
};
}  // namespace curve