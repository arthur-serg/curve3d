#include "Ellipse.hpp"

namespace curve {
Ellipse::Ellipse(const double& a, const double& b, const double& t)
    : a(a), b(b), t(t) {
  std::cout << "Ellipse::Ellipse(a,b,t)" << std::endl;
}
std::string Ellipse::getName() const {
  std::cout << "Ellipse" << std::endl;
  return "Ellipse";
}
Point Ellipse::getValue(const double& t) const {
  return Point(a * cos(t), b * sin(t), 0);
}
Point Ellipse::getDerivative(const double& t) const {
  return Point(-a * sin(t), b * cos(t), 0);
}
Ellipse::~Ellipse() {
  std::cout << "~Ellipse()" << std::endl;
}
}  // namespace curve