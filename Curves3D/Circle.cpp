#include "Circle.hpp"

namespace curve {

Circle::Circle(const double& radius) : radius(radius) {
  std::cout << "Circle::Circle(radius)" << std::endl;
}

std::string Circle::getName() const noexcept {
  std::cout << "Circle" << std::endl;
  return "Circle";
}

Point Circle::getValue(const double& t) const noexcept {
  return Point(radius * cos(t), radius * sin(t), 0);
}

Point Circle::getDerivative(const double& t) const noexcept {
  return Point(-radius * sin(t), radius * cos(t), 0);
}

Circle::~Circle() noexcept {
  std::cout << "~Circle()" << std::endl;
}

}  // namespace curve