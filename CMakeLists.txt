cmake_minimum_required(VERSION 3.5)
cmake_policy(SET CMP0015 NEW)
cmake_policy(SET CMP0022 NEW)

project(Mirco)

# Standard must be set both this way and in the flags below, to cover all cmake versions
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -g -Werror -Wall -pedantic -Wextra -fPIC -Wnon-virtual-dtor -std=c++17")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-z,defs")

include(FindPkgConfig)
pkg_check_modules(MIRAL miral REQUIRED)

add_executable(mirco
    main.cpp
    window_manager_policy.cpp window_manager_policy.h)

target_include_directories(mirco PUBLIC SYSTEM ${MIRAL_INCLUDE_DIRS})
target_link_libraries(     mirco               ${MIRAL_LDFLAGS})

install(PROGRAMS ${CMAKE_BINARY_DIR}/mirco
    DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)
