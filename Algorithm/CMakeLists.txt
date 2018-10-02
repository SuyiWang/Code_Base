add_library(Algorithm hash.cpp)
include_directories("../../DiMorSC_BIGGER/DiMorSC/extern/boost/")
#include_directories("External/boost/")

install (TARGETS Algorithm DESTINATION bin)
install (FILES hash.h DESTINATION include)
