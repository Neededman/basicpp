cmake_minimum_required (VERSION 2.6)
add_definitions(-std=c++11)

project (Singleton)

include_directories(
    include
)

aux_source_directory(
    src DIR_SRCS
)

add_executable(Singleton ${DIR_SRCS})

TARGET_LINK_LIBRARIES( Singleton
    pthread
)

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")