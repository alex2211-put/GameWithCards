cmake_minimum_required(VERSION 3.16)
project(GameWithCards)

set(CMAKE_CXX_STANDARD 20)

add_executable(GameWithCards main.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(GameWithCards ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

target_link_libraries(GameWithCards sfml-graphics sfml-audio)
