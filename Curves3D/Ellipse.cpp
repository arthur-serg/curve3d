#include "include/Ellipse.hpp"

namespace curve {

Ellipse::Ellipse(const double& a, const double& b) : a(a), b(b) {
  std::cout << "Ellipse::Ellipse(a,b)" << std::endl;
}
Ellipse::Ellipse() {
  a = RandomDouble(20).getValue();
  b = RandomDouble(20).getValue();
}
std::string Ellipse::getName() const noexcept {
  return "Ellipse";
}
Point Ellipse::getValue(const double& t) const noexcept {
  return Point(a * cos(t), b * sin(t), 0);
}
Point Ellipse::getDerivative(const double& t) const noexcept {
  return Point(-a * sin(t), b * cos(t), 0);
}
Ellipse::~Ellipse() noexcept {
  /*std::cout << "~Ellipse()" << std::endl;*/
}
}  // namespace curve