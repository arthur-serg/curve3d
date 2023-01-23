# CMakeList.txt : CMake project for Curves3D, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
# Add source to this project's executable.
add_executable (Curves3D "Curves3D.cpp" "Curves3D.hpp" "Circle.cpp" "Circle.hpp" "Ellipse.cpp" "Ellipse.hpp" "Helix.cpp" "Helix.hpp" "Point.cpp" "Point.hpp")

# TODO: Add tests and install targets if needed.
