#include "Circle.hpp"

namespace curve {
Circle::Circle(const double& radius, const double& t)
    : radius(radius), t(t), origin(radius * cos(t), radius * sin(t), 0) {
  std::cout << "Circle::Circle(a,b,t) " << std::endl;
}

std::string Circle::getName() const {
  std::cout << "Circle" << std::endl;
  return "Circle";
}

Point Circle::getValue(const double& t) const {
  return Point(radius * cos(t), radius * sin(t), 0);
}

Point Circle::getDerivative(const double& t) const {
  return Point(-radius * sin(t), radius * cos(t), 0);
}

Circle::~Circle() {
  std::cout << "~Circle()" << std::endl;
}

}  // namespace curve