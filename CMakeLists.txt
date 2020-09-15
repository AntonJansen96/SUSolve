# Project name
project(SUSolve)

# Minimum required version for CMake
cmake_minimum_required(VERSION 3.10)

# Specify minimum required C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add a subdirectory to the build
add_subdirectory(src)

# add executable
add_executable(susolve src/susolve.cc src/import.cc)

# Link executable to librarie(s)
target_link_libraries(susolve PUBLIC sudoku)

# -----------------------------------------------------------------------------

enable_testing()                # Enable testing.
include(CTestConfig.cmake)      # Seperate .cmake file containing the tests.

# -----------------------------------------------------------------------------

install(TARGETS susolve        DESTINATION /usr/bin)
install(FILES   src/susolve.ih DESTINATION /usr/include)
