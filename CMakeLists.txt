cmake_minimum_required(VERSION 2.8)
project( helloworld )
set("OpenCV_DIR" "C:\\opencv\\build")


find_package( OpenCV REQUIRED )
add_executable( helloworld helloworld.cpp )
target_link_libraries( helloworld ${OpenCV_LIBS} )