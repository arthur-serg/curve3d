#include "Point.hpp"
#include <iostream>
namespace curve {

Point::Point(const double& x, const double& y, const double& z)
    : x(x), y(y), z(z) {}

void Point::print() const {
  std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
}

}  // namespace curve