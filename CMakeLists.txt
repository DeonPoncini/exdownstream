cmake_minimum_required(VERSION 2.8)
project(exdownstream)

set(EXDOWNSTREAM_VERSION "0.0.1")

################################
# Compiler setup
################################

find_package(libexupstream1)
find_package(libexupstream2)
include_directories(${LIBEXUPSTREAM1_INCLUDE_DIRS})
include_directories(${LIBEXUPSTREAM2_INCLUDE_DIRS})

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
    ${LIBEXUPSTREAM1_LIBRARIES}
    ${LIBEXUPSTREAM2_LIBRARIES}
)

################################
# Export binaries
################################

export_project(
    NAME exdownstream
    BINS exdownstream
    VERSION ${EXDOWNSTREAM_VERSION}
)


