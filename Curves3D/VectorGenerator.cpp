#include "VectorGenerator.hpp"
#include <random>

namespace curve {

VectorGenerator::VectorGenerator(const int& size) {
  for (int i = 0; i < size; ++i) {
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
void VectorGenerator::printValues(const double& t) {
  if (!data.empty()) {
    for (const auto& element : data) {
      std::cout << element.get()->getName() << " at t=" << t << std::endl;
      element.get()->getValue(t).print();
    }
  }
}
void VectorGenerator::printDerivatives(const double& t) {
  if (!data.empty()) {
    for (const auto& element : data) {
      std::cout << element.get()->getName() << " at t=" << t << std::endl;
      element.get()->getDerivative(t).print();
    }
  }
}
}  // namespace curve