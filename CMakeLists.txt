cmake_minimum_required(VERSION 3.29)
project(wxWidgetExample)

set(CMAKE_CXX_STANDARD 17)

find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

add_executable(wxWidgetExample
#        Main.cpp
        MainFrame.cpp
        MainFrame.h
        App.cpp
        App.h
        MainFrame2.cpp
        MainFrame2.h)

target_link_libraries(wxWidgetExample ${wxWidgets_LIBRARIES})