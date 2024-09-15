cmake_minimum_required(VERSION 3.13)

project(TTASCI VERSION 1.0 LANGUAGES CXX)

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
   # -Wsign-conversion
    -Wsign-promo
)

set(SOURCE_EXE src/main.cpp)
set(SOURCE_LIB src/TTSCI_LIB.cpp)			
set(SOURCE_DEFAULT src/fonts/default.cpp)
add_library(TTASCI_LIB ${SOURCE_LIB} include/TTSCI_LIB.h)	
add_library(DEFAULT ${SOURCE_DEFAULT} fonts/default.h) 
target_include_directories(TTASCI_LIB PUBLIC include)
target_include_directories(DEFAULT PUBLIC fonts)
add_executable(TTASCI ${SOURCE_EXE})
target_link_libraries(TTASCI TTASCI_LIB DEFAULT)