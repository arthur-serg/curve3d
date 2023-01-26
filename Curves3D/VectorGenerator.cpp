#include "VectorGenerator.hpp"
#include <random>

namespace curve {

VectorGenerator::VectorGenerator(const int& upperBound) {
  std::cout << "VectorGenerator::VectorGenerator()" << std::endl;
  std::random_device randomizer;
  std::mt19937 generator(randomizer());
  std::uniform_int_distribution<> distribution(1, upperBound);
  size = distribution(generator);
  data.resize(size);
  std::cout << "size: " << size << std::endl;
}
}  // namespace curve