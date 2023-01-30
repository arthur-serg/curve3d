// Curves3D.cpp : Defines the entry point for the application.
//

#include "include/Curves3D.hpp"
#include <algorithm>
#include <cmath>
#include <numeric>
#include "include/Circle.hpp"
#include "include/Curve.hpp"
#include "include/CurveVector.hpp"
#include "include/Ellipse.hpp"
#include "include/Helix.hpp"
double pi = std::acos(-1);

int main() {
  double t = pi / 4.0;

  std::cout << "Generate vector of random curves: \n";
  curve::CurveVector curves(15);
  curves.printValues(t);
  auto circles = curves.getCircles();
  std::cout << "Only circles (unsorted): \n";
  for (const auto& c : circles) {
    c.get()->getValue(t).print();
    std::cout << "rad: " << c.get()->getRadius() << "\n";
  }
  std::cout << "Circles after sort: \n";
  std::sort(circles.begin(), circles.end(),
            [](const std::shared_ptr<curve::Curve>& c1,
               const std::shared_ptr<curve::Curve>& c2) -> bool {
              return c1->getRadius() < c2->getRadius();
            });

  for (const auto& c : circles) {
    c.get()->getValue(t).print();
    std::cout << "rad: " << c.get()->getRadius() << "\n";
  }

  std::cout << "Total sum of radii of all circles is: \n";
  double totalRadii =
      std::accumulate(circles.begin(), circles.end(), 0.0,
                      [](double totalRad,
                         const std::shared_ptr<curve::Curve>& curve) -> double {
                        return totalRad + curve.get()->getRadius();
                      });

  std::cout << totalRadii << std::endl;

  return 0;
}
