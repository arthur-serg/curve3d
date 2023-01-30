#include "include/Helix.hpp"

namespace curve {

Helix::Helix(const double& radius, const double& step)
    : radius(radius), step(step) {
  std::cout << "Helix::Helix(a,b)" << std::endl;
}

Helix::Helix() {
  radius = RandomDouble(10).getValue();
  step = RandomDouble(10).getValue();
}

std::string Helix::getName() const noexcept {
  return "Helix";
}

Point Helix::getValue(const double& t) const noexcept {
  return Point(radius * cos(t), radius * sin(t), step * t);
}

Point Helix::getDerivative(const double& t) const noexcept {
  return Point(-radius * sin(t), radius * cos(t), step);
}

Helix::~Helix() noexcept {
  /*std::cout << "~Helix()" << std::endl;*/
}

}  // namespace curve