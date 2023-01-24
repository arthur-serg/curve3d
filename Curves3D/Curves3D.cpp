// Curves3D.cpp : Defines the entry point for the application.
//

#include "Curves3D.hpp"

#include <cmath>
#include "Circle.hpp"
#include "Curve.hpp"
#include "Ellipse.hpp"
#include "Helix.hpp"
double pi = std::acos(-1);
int main() {
  double t = pi / 4.0;
  double circleRadius = 1;
  double a = 2.0;
  double b = 4.0;
  auto circle = curve::Circle(circleRadius);
  circle.getValue(t).print();
  circle.getDerivative(t).print();

  auto ellipse = curve::Ellipse(a, b);
  ellipse.getValue(t).print();
  ellipse.getDerivative(t).print();

  auto helix = curve::Helix(a, b);
  helix.getValue(t).print();
  helix.getValue(t + 2 * pi).print();

  helix.getDerivative(t).print();
  helix.getDerivative(t + 2 * pi).print();
  return 0;
}
