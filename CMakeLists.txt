cmake_minimum_required(VERSION 3.1)
project(Image_Classifier)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find the OpenCV package
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)

# Specify the target and sources
file(GLOB SOURCES "src/*.cpp")
add_executable(Image_Classifier ${SOURCES})

# Link the OpenCV libraries to your target
target_link_libraries(Image_Classifier ${OpenCV_LIBS})
