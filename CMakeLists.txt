cmake_minimum_required(VERSION 3.21)
project(testProject LANGUAGES CXX)


# Qt
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


# Language
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)



# Dependencies
find_package(QT NAMES Qt5 COMPONENTS Quick REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Quick REQUIRED)

add_subdirectory(adapters)
add_subdirectory(presentation)



# Build
add_executable(appTestProject main.cpp)

target_include_directories(appTestProject
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/presentation
    ${CMAKE_CURRENT_SOURCE_DIR}/adapters
)

target_link_libraries(appTestProject
    PRIVATE
    Qt5::Quick
    presentation
    adapters
)