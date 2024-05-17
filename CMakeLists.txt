cmake_minimum_required(VERSION 3.28)
project(LilacPhysicsEngine)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)

FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
#        ParticleSim_unop/main.cpp
#        ParticleSim_unop/solver.hpp
#        utils/math.hpp
#        utils/number_generator.hpp
#        ParticleSim_unop/renderer.hpp
        src/renderer/renderer.cpp
        src/renderer/renderer.hpp
        src/Main.cpp
        src/thread_pool/thread_pool.hpp
        src/physics/collision_grid.hpp
        src/physics/physic_object.hpp
        src/physics/physics.hpp
        src/engine/render/viewport_handler.hpp
        src/engine/window_context_handler.hpp
        src/engine/common/vec.hpp
        src/engine/common/utils.hpp
        src/engine/common/racc.hpp
        src/engine/common/color_utils.hpp
        src/engine/common/color_utils.hpp
        src/engine/common/grid.hpp
        src/engine/common/number_generator.hpp
        src/engine/common/number_generator.hpp
#        ParticleSim_unop/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(LilacPhysicsEngine sfml-graphics)