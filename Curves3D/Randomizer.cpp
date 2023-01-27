#include "Randomizer.hpp"
#include <iostream>
namespace curve {

curve::RandomDouble::RandomDouble(const double& distributionUpperBound) {
  std::cout << "RandomDouble::RandomDouble" << std::endl;
  std::random_device randomDevice;
  std::mt19937 generator(randomDevice());
  std::uniform_real_distribution<double> distribution(0,
                                                      distributionUpperBound);
  outValue = distribution(generator);
}
}  // namespace curve