cmake_minimum_required(VERSION 3.1)

project(KR_2)

include_directories(${PROJECT_SOURCE_DIR})

set (KR_2_SRC  main.cpp autotest.cpp CVectRat.cpp CRat.cpp input.cpp raschet.cpp )
set (KR_2_HDR  Func.h, CRat.h, CVectRat.h)

add_executable (${PROJECT_NAME} ${KR_2_SRC} ${KR_2_HDR})