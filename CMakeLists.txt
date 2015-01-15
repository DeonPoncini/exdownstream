cmake_minimum_required(VERSION 2.8)
project(exdownstream)

set(EXDOWNSTREAM_VERSION "0.0.1")

################################
# Compiler setup
################################

find_package(exupstream1)
find_package(exupstream2)
include_directories(${EXUPSTREAM1_INCLUDE_DIRS})
include_directories(${EXUPSTREAM2_INCLUDE_DIRS})

################################
# Locate source
################################
file(GLOB_RECURSE INCLUDES include/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

include_directories(include)

################################
# Build targets
################################

add_executable(exdownstream
    ${SRC}
    ${INCLUDES})

target_link_libraries(exdownstream
    ${EXUPSTREAM1_LIBRARIES}
    ${EXUPSTREAM2_LIBRARIES}
)

################################
# Export binaries
################################

export_project(
    NAME exdownstream
    BINS exdownstream
    VERSION ${EXDOWNSTREAM_VERSION}
)
