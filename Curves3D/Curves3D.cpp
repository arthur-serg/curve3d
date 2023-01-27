// Curves3D.cpp : Defines the entry point for the application.
//

#include "Curves3D.hpp"
#include <algorithm>
#include <cmath>
#include "Circle.hpp"
#include "Curve.hpp"
#include "Ellipse.hpp"
#include "Helix.hpp"
#include "VectorGenerator.hpp"
double pi = std::acos(-1);
int main() {
  double t = pi / 4.0;

  std::cout << "Generate vector of random curves: \n";
  curve::VectorGenerator vec(15);
  vec.printValues(t);

  std::vector<std::shared_ptr<curve::Circle>> circles;

  return 0;
}
