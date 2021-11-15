#cmake_minimum_required(VERSION 3.20)

#set(CMAKE_CXX_STANDARD 11)

include_directories(src/main/cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/cmake-build-test)


FILE(GLOB
        TEST_FILES
        ${PROJECT_SOURCE_DIR}/src/main/test/*.cpp
        )

add_executable(
        JavaRtCppImplTest
        ${TEST_FILES}
)

set(CMAKE_BUILD_TYPE debug)
#link_directories(${PROJECT_SOURCE_DIR}/cmake-build-debug)

# 库;
find_library(
        JAVA_RT_CPP_IMPL
        libJavaRtCppImpl.dylib
        ${PROJECT_SOURCE_DIR}/cmake-build-debug
)

target_link_libraries(
        JavaRtCppImplTest
        ${JAVA_RT_CPP_IMPL}
)

## 指定静态库搜索路径
##if (CMAKE_BUILD_TYPE MATCHES "debug")
##    link_directories(${PROJECT_SOURCE_DIR}/cmake-build-debug)
##elseif (CMAKE_BUILD_TYPE MATCHES "release")
##    link_directories(${PROJECT_SOURCE_DIR}/cmake-build-release)
##endif ()
#target_link_libraries(
#        JavaRtCppImplTest
#        libJavaRtCppImpl.a
#        )
