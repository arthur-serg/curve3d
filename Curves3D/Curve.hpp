#pragma once
#include <iostream>
#include "Point.hpp"
namespace curve {

class Curve {
 public:
  virtual std::string getName() const = 0;
  virtual Point getValue(const double& t) const = 0;
  virtual Point getDerivative(const double& t) const = 0;
  virtual ~Curve() { std::cout << "~Curve()" << std::endl; }
};
}  // namespace curve