#pragma once
#include "Curve.hpp"
namespace curve {
class Helix : public Curve {
 public:
  explicit Helix(const double& radius, const double& step);
  Helix();
  Helix(const Helix&) = delete;
  Helix& operator=(const Helix&) = delete;
  std::string getName() const noexcept override;
  Point getValue(const double& t) const noexcept override;
  Point getDerivative(const double& t) const noexcept override;
  double getRadius() const noexcept override { return radius; }
  virtual ~Helix() noexcept;

 private:
  double radius;
  double step;
};
}  // namespace curve