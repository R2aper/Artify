cmake_minimum_required(VERSION 3.13)

project(artify VERSION 1.0 LANGUAGES CXX)

add_compile_options(
    -Werror

    -Wall
    -Wextra
    -Wpedantic

    -Wcast-align
    -Wcast-qual
    -Wconversion
    -Wctor-dtor-privacy
    -Wenum-compare
    -Wfloat-equal
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Woverloaded-virtual
    -Wredundant-decls
    -Wsign-conversion
    -Wsign-promo
)

set(SOURCE_EXE src/main.cpp)
set(SOURCE_LIB src/libartify.cpp)			
set(SOURCE_DEFAULT src/fonts/default.cpp)
set(SOURCE_ABC src/fonts/abc.cpp)
set(SOURCE_TINY src/fonts/tiny.cpp)
set(SOURCE_SHADY src/fonts/shady.cpp)

add_library(LIBARTIFY ${SOURCE_LIB} include/libartify.hpp)	
add_library(DEFAULT ${SOURCE_DEFAULT} fonts/default.hpp) 
add_library(ABC ${SOURCE_ABC} fonts/abc.hpp)
add_library(TINY ${SOURCE_TINY} fonts/tiny.hpp)
add_library(SHADY ${SOURCE_SHADY} fonts/shady.hpp)

target_include_directories(LIBARTIFY PUBLIC include)
target_include_directories(DEFAULT PUBLIC fonts)

add_executable(artify ${SOURCE_EXE})
target_link_libraries(artify LIBARTIFY DEFAULT ABC TINY SHADY)
