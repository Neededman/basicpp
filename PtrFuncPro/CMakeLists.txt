cmake_minimum_required (VERSION 2.6)

project (PtrFuncPro)

include_directories(
    include
)

aux_source_directory(
    src DIR_SRCS
)

add_executable(PtrFuncPro ${DIR_SRCS})