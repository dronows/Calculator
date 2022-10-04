cmake_minimum_required (VERSION 3.8)

project ("Calculator")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable (Calculator "main.cpp" "Calculator.h" "Calculator.cpp" "calculator.ui")
set(CMAKE_PREFIX_PATH "F:\\Qt\\5.12.12\\msvc2017_64\\lib\\cmake")
find_package( Qt5 COMPONENTS
    Core
    Gui
    Widgets
REQUIRED)

target_link_libraries(Calculator
Qt5::Core
Qt5::Gui
Qt5::Widgets)
