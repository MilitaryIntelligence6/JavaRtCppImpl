cmake_minimum_required(VERSION 3.20)
project(JavaRtCppImpl)

set(CMAKE_CXX_STANDARD 11)

include_directories(src/main/cpp)

#include_directories(dep/fmt/include)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall -Wextra -Wno-sign-compare -Wno-unused-but-set-variable -Wno-array-bounds")
    # set(EXTRA_CXX_FLAGS -Weffc++ -Wswitch-default -Wfloat-equal -Wconversion -Wsign-conversion)
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS "5.0.0")
        message(FATAL_ERROR "required GCC 5.0 or later")
    else ()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    endif ()
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall -Wextra -Wno-sign-compare")
    # set(EXTRA_CXX_FLAGS -Weffc++ -Wswitch-default -Wfloat-equal -Wconversion -Wimplicit-fallthrough)
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS "3.5.0")
        message(FATAL_ERROR "required Clang 3.5 or later")
    else ()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    endif ()
endif ()

FILE(GLOB SOURCE_FILES
        src/main/cpp/*/*/*.h
        src/main/cpp/*/*/*.hpp
        src/main/cpp/*/*/*.cpp
        )

#find_library(
#        FMT_LIB
##        libfmtd.dylib
#        libfmtd.a
#        ${PROJECT_SOURCE_DIR}/dep/dylib
#)

#target_link_libraries(
#        JavaRtCppImpl
#        ${FMT_LIB}
#)

add_library(
        JavaRtCppImpl
        # 有这个就是 shared;
        SHARED
        library.cpp
#        ${FMT_LIB}
        ${SOURCE_FILES}
)

add_subdirectory(src/main/test)

