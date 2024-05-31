cmake_minimum_required(VERSION 3.22)
project(qt5test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# The Qt SDK path
# 检查 CMAKE_PREFIX_PATH 是否包含 ${QTDIR}/lib/cmake。
# set(QT_SDK_DIR "/Users/cf/Qt/5.15.2/clang_64/")
set(QT_SDK_DIR "/Users/apple/Desktop/cfcode/qt/5.15.4_macos_arm64/")
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT_SDK_DIR})

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets Network
        REQUIRED)

add_executable(qt5test main.cpp)
target_link_libraries(qt5test
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Network
        )
