#include "Circle.hpp"

namespace curve {

Circle::Circle(const double& radius) : radius(radius) {
  std::cout << "Circle::Circle(radius)" << std::endl;
}

Circle::Circle() {
  radius = RandomDouble(10).getValue();
}

std::string Circle::getName() const noexcept {
  return "Circle";
}

Point Circle::getValue(const double& t) const noexcept {
  return Point(radius * cos(t), radius * sin(t), 0);
}

Point Circle::getDerivative(const double& t) const noexcept {
  return Point(-radius * sin(t), radius * cos(t), 0);
}

Circle::~Circle() noexcept {
  /*std::cout << "~Circle()" << std::endl;*/
}

}  // namespace curve