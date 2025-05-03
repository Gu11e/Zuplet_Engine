cmake_minimum_required(VERSION 3.30)
project(GameEngineSolution)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Zuplet_Engine)
add_subdirectory(Sandbox)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "Build the GLFW documentation")
add_subdirectory(Zuplet_Engine/vendor/GLFW)

add_subdirectory(Zuplet_Engine/vendor/Glad)