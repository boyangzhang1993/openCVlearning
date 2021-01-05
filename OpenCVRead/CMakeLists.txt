

cmake_minimum_required (VERSION 3.0)
cmake_policy(SET CMP0012 NEW)
PROJECT(project)
 
# Requires OpenCV
FIND_PACKAGE( OpenCV 4.0.0 REQUIRED )
MESSAGE("OpenCV version : ${OpenCV_VERSION}")
 
include_directories(${/usr/local/Cellar/opencv/4.5.0_5/include/opencv4})
link_directories(${/usr/local/Cellar/opencv/4.5.0_5})
 
ADD_EXECUTABLE(sample main.cpp)
TARGET_LINK_LIBRARIES(sample ${OpenCV_LIBS})
