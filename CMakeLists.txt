cmake_minimum_required(VERSION 3.10)

project("singly_linked_dynamic_list")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(
  thisapp 
  PRIVATE
  ${PROJECT_SOURCE_DIR}/libs
)

add_executable(
  app.out
  main.cpp
  ./src/MenuItem.cpp
  ./src/MenuItemFactory.cpp
)
