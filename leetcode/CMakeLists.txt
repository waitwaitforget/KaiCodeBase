cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME LeetCode)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(default_build_type "Release")

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
  set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE
      STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
    "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
        message(STATUS "Configuring on/for Linux")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
        message(STATUS "Configuring on/for MacOS")
else()
        message(STATUS "Configuring on/for ${CMAKE_SYSTEM_NAME}")
endif()

project(${PROJECT_NAME} VERSION 1.0.1)

# configure_file(TutorialConfig.h.in TutorialConfig.h)

# add static library
add_subdirectory(array)
add_subdirectory(tree)
add_subdirectory(list)
add_subdirectory(geometry)
# add_library(src src/sqrt.cc)
# add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cc)
#target_link_libraries(${PROJECT_NAME} PUBLIC sqrt)
target_link_libraries(${PROJECT_NAME} array tree list geometry)

set_property(TARGET ${PROJECT_NAME}
             PROPERTY CXX_STANDARD 11)
# set timestamp to comile_time
string(TIMESTAMP COMPILE_TIME %Y%m%d-%H%M%S)


target_include_directories(${PROJECT_NAME} PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/array"
                            "${PROJECT_SOURCE_DIR}/tree"
                            "${PROJECT_SOURCE_DIR}/list"
                            "${PROJECT_SOURCE_DIR}/geometry"
                            )
                    