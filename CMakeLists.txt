cmake_minimum_required (VERSION 3.2)

project (SmileDPM)

set (TEST_VERSION 0.1)

set(CMAKE_BUILD_TYPE "Release")

# Check platform
IF (WIN32)
	MESSAGE(FATAL_ERROR "Platform is Windows, which has not been supported yet.")
ELSEIF (UNIX)
	MESSAGE(STATUS "Platform is UNIX or UNIX-like OS(e.g. Linux).")
ELSEIF (APPLE)
	MESSAGE(FATAL_ERROR "Platform is Apple(e.g. macOS, iOS, tvOS or watchOS), which has not been supported yet.")
ENDIF ()

find_package(Eigen3 REQUIRED)

find_package(Armadillo REQUIRED)

find_package(Boost REQUIRED)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include
					${PROJECT_SOURCE_DIR}/include/Type
					${PROJECT_SOURCE_DIR}/include/List
					${PROJECT_SOURCE_DIR}/include/Particle
					${PROJECT_SOURCE_DIR}/include/Cloud
					${PROJECT_SOURCE_DIR}/include/Grid)

aux_source_directory(${PROJECT_SOURCE_DIR}/application SRC_APP)

aux_source_directory(${PROJECT_SOURCE_DIR}/src/Cloud SRC_LIB_CLOUD)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIB)

add_library(cloud STATIC ${SRC_LIB_CLOUD})

link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(SmileDPM ${SRC_APP})