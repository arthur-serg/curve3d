#pragma once
#include <math.h>
#include "include/Curve.hpp"
namespace curve {
class Circle : public Curve {
 public:
  explicit Circle(const double& radius);
  Circle();
  Circle(const Circle&) = delete;
  Circle& operator=(const Circle&) = delete;

  std::string getName() const noexcept override;
  Point getValue(const double& t) const noexcept override;
  Point getDerivative(const double& t) const noexcept override;
  double getRadius() const noexcept override { return radius; }
  virtual ~Circle() noexcept;

 private:
  double radius;
};
}  // namespace curve