#include "Helix.hpp"

namespace curve {

Helix::Helix(const double& radius, const double& step)
    : radius(radius), step(step) {
  std::cout << "Helix::Helix(a,b)" << std::endl;
}

std::string Helix::getName() const {
  std::cout << "Helix" << std::endl;
  return "Helix";
}

Point Helix::getValue(const double& t) const {
  return Point(radius * cos(t), radius * sin(t), step * t);
}

Point Helix::getDerivative(const double& t) const {
  return Point(-radius * sin(t), radius * cos(t), step);
}

Helix::~Helix() {
  std::cout << "~Helix()" << std::endl;
}

}  // namespace curve