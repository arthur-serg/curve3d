#include "Helix.hpp"

namespace curve {

Helix::Helix(const double& radius, const double& step)
    : radius(radius), step(step) {
  std::cout << "Helix::Helix(a,b)" << std::endl;
}

Helix::Helix() {
  RandomDouble randomizer(10);
  radius =  randomizer.getValue();
  step = 1;
}

std::string Helix::getName() const noexcept {
  std::cout << "Helix" << std::endl;
  return "Helix";
}

Point Helix::getValue(const double& t) const noexcept {
  return Point(radius * cos(t), radius * sin(t), step * t);
}

Point Helix::getDerivative(const double& t) const noexcept {
  return Point(-radius * sin(t), radius * cos(t), step);
}

Helix::~Helix() noexcept {
  std::cout << "~Helix()" << std::endl;
}

}  // namespace curve