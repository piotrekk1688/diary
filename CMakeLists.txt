cmake_minimum_required(VERSION 3.3)

project(Diary LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(Diary main.cpp)

target_link_libraries(Diary Qt5::Widgets)
