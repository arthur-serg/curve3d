#pragma once
#include <math.h>
#include "Curve.hpp"
namespace curve {
class Circle : public Curve {
 public:
  explicit Circle(const double& radius);
  std::string getName() const noexcept override;
  Point getValue(const double& t) const noexcept override;
  Point getDerivative(const double& t) const noexcept override;
  virtual ~Circle() noexcept;

 private:
  double radius;
};
}  // namespace curve