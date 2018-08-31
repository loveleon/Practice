cmake_minimum_required(VERSION 3.2)
project(tips)

include_directories(. ./fileutil_test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FALGS_DEBUG "$ENV{CXXFLAGS}" -O0 -Wall -g -ggdb)

aux_source_directory(./fileutil_test SRC)
aux_source_directory(./tbsys TBSYS)
add_executable(fileutil_test ${SRC} ${TBSYS})

aux_source_directory(./daemon_test DAEMON_TEST)
add_executable(daemon_test ${DAEMON_TEST} ${TBSYS})

aux_source_directory(./linklist_test LINK_TEST)
add_executable(linklist ${LINK_TEST} ${TBSYS})
