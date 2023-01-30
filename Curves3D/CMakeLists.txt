# CMakeList.txt : CMake project for Curves3D, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
# Add source to this project's executable.
add_executable (Curves3D "Curves3D.cpp" "include/Curves3D.hpp" "Circle.cpp" "include/Circle.hpp" "Ellipse.cpp" "include/Ellipse.hpp" "Helix.cpp" "include/Helix.hpp" "Point.cpp" "include/Point.hpp" "CurveVector.cpp" "include/CurveVector.hpp" "Randomizer.cpp" "include/Randomizer.hpp")

# TODO: Add tests and install targets if needed.
