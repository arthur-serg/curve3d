#pragma once
#include <iostream>
#include "Point.hpp"
#include "Randomizer.hpp"
namespace curve {

class Curve {
 public:
  virtual std::string getName() const noexcept = 0;
  virtual Point getValue(const double& t) const noexcept = 0;
  virtual Point getDerivative(const double& t) const noexcept = 0;
  virtual double getRadius() const noexcept = 0;
  virtual ~Curve() noexcept { /*std::cout << "~Curve()" << std::endl;*/
  }
  Curve operator=(Curve&&) = delete;
};
}  // namespace curve