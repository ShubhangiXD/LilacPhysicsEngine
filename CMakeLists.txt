cmake_minimum_required(VERSION 3.28)
project(LilacPhysicsEngine)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)

FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(LilacPhysicsEngine main.cpp
        solver.hpp
        utils/math.hpp
        utils/number_generator.hpp
        renderer.hpp)

target_link_libraries(LilacPhysicsEngine sfml-graphics)