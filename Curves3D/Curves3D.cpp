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
  std::sort(circles.begin(), circles.end(),
            [](const std::shared_ptr<curve::Curve>& c1,
               const std::shared_ptr<curve::Curve>& c2) -> bool {
              return c1->getRadius() < c2->getRadius();
            });

  std::vector<std::shared_ptr<curve::Circle>> circles;
  double totalRadii =
      std::accumulate(circles.begin(), circles.end(), 0.0,
                      [](double totalRad,
                         const std::shared_ptr<curve::Curve>& curve) -> double {
                        return totalRad + curve.get()->getRadius();
                      });

  return 0;
}
