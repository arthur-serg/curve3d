#include "Randomizer.hpp"
#include <iostream>
namespace curve {

curve::RandomDouble::RandomDouble(const double& distributionUpperBound) {
  std::cout << "RandomDouble::RandomDouble" << std::endl;
  std::random_device randomDevice;
  std::mt19937 generator;
  std::uniform_real_distribution<> distribution(1, distributionUpperBound);
  outValue = distribution(generator);
  std::cout << "out value: " << outValue << std::endl;
  ;
}
}  // namespace curve