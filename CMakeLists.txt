cmake_minimum_required (VERSION 2.6)
project (Code_Base)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

include_directories("DataStructure/")
include_directories("Algorithm/")
add_subdirectory (Algorithm)
set(EXTRA_LIBS ${EXTRA_LIBS} Algorithm)

include_directories("../DiMorSC_BIGGER/DiMorSC/extern/boost/")

add_executable(DummySqrt test/dummycode.cpp)
add_executable(loadpts test/loadpts.cpp)
target_link_libraries (loadpts ${EXTRA_LIBS})
