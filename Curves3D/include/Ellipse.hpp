#pragma once
#include <math.h>
#include "include/Curve.hpp"
namespace curve {

class Ellipse : public Curve {
 public:
  explicit Ellipse(const double& a, const double& b);
  Ellipse();
  Ellipse(const Ellipse&) = delete;
  Ellipse& operator=(const Ellipse&) = delete;

  std::string getName() const noexcept override;
  Point getValue(const double& t) const noexcept override;
  Point getDerivative(const double& t) const noexcept override;
  double getRadius() const noexcept override { return 0; }
  virtual ~Ellipse() noexcept;

 private:
  double a;
  double b;
};

}  // namespace curve
