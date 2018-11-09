cmake_minimum_required (VERSION 2.6)

project (DebugPro)

include_directories(
    include
)

aux_source_directory(
    src DIR_SRCS
)

add_executable(DebugPro ${DIR_SRCS})