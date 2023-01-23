// Curves3D.cpp : Defines the entry point for the application.
//

#include "Curves3D.hpp"

#include "Circle.hpp"
#include "Curve.hpp"
#include "Ellipse.hpp"
#include "Helix.hpp"
#include <cmath>
double pi = std::acos(-1);
int main() {
  double t = pi / 4.0;
  double circleRadius = 1;
  auto circle = curve::Circle(circleRadius, t);
  circle.getValue(t).print();
  return 0;
}
