#include "include/CurveVector.hpp"
#include <random>

namespace curve {
typedef std::shared_ptr<Curve> CurvePtr;
CurveVector::CurveVector(const int& size) {
  for (size_t i = 0; i != size; ++i) {
    int trigger = RandomDouble(3).getValue();
    switch (trigger) {
      case 0:
        data.emplace_back(std::move(new Circle));
        break;
      case 1:
        data.emplace_back(std::move(new Ellipse));
        break;
      case 2:
        data.emplace_back(std::move(new Helix));
        break;
    }
  }
}
void CurveVector::printValues(const double& t) {
  if (!data.empty()) {
    for (const auto& element : data) {
      std::cout << element.get()->getName() << " at t=" << t << std::endl;
      element.get()->getValue(t).print();
    }
  }
}
void CurveVector::printDerivatives(const double& t) {
  if (!data.empty()) {
    for (const auto& element : data) {
      std::cout << element.get()->getName() << " at t=" << t << std::endl;
      element.get()->getDerivative(t).print();
    }
  }
}
std::vector<CurvePtr> CurveVector::getCircles() {
  if (!data.empty()) {
    for (auto it = data.begin(); it != data.end(); ++it) {
      if (isCircle(**it)) {
        circles.push_back(*it);
      }
    }
  }

  return circles;
}

bool CurveVector::isCircle(const curve::Curve& curve) {
  return dynamic_cast<const curve::Circle*>(&curve);
}
}  // namespace curve