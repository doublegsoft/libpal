##
## ███████████████████████████████████
## █▄─▄███▄─▄█▄─▄─▀█▄─▄▄─██▀▄─██▄─▄███
## ██─██▀██─███─▄─▀██─▄▄▄██─▀─███─██▀█
## ▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▀▄▄▄▀▀▀▄▄▀▄▄▀▄▄▄▄▄▀
##
cmake_minimum_required(VERSION 3.13)

project(libpal C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_CXX_STANDARD 17)

if (WIN32)
elseif (APPLE)
  set(PLATFORM                          "darwin")
elseif (UNIX)
  set(PLATFORM                          "linux")
endif()
set(BUILD                             "build/${PLATFORM}")

################################################################################
##                                                                            ##
##                                    antlr4                                  ##
##                                                                            ##
################################################################################
set(ANTLR4_DIR                        "3rd/antlr4-4.9.3/runtime/Cpp")
set(ANTLR4_INCLUDE_DIR                "${ANTLR4_DIR}/runtime/src")
set(ANTLR4_LIBRARY_DIR                "${ANTLR4_DIR}/dist")
set(ANTLR4_LIBRARIES                  antlr4-runtime)

################################################################################
##                                                                            ##
##                                   gfc                                      ##
##                                                                            ##
################################################################################
set(GFC_DIR                           "3rd/gfc")
set(GFC_INCLUDE_DIR                   "${GFC_DIR}/include")
set(GFC_LIBRARY_DIR                   "${GFC_DIR}/${BUILD}")
set(GFC_LIBRARIES                     gfc)


set(WITH_GFC_CRYPTO OFF CACHE BOOL "gfc crypto" FORCE)
set(WITH_GFC_JVM OFF CACHE BOOL "gfc jvm" FORCE)
set(WITH_GFC_LUA OFF CACHE BOOL "gfc lua" FORCE)
add_subdirectory("${GFC_DIR}")

include_directories(
  "gen"
  "src"
  ${ANTLR4_INCLUDE_DIR}
  ${GFC_INCLUDE_DIR}
)

link_directories(
  ${ANTLR4_LIBRARY_DIR}
)

set(LIBPAL_SOURCES
  src/libpal.cpp
  gen/PALBaseListener.cpp
  gen/PALLexer.cpp
  gen/PALListener.cpp
  gen/PALParser.cpp
)

add_library(pal STATIC ${LIBPAL_SOURCES})
add_library(pal_shared SHARED ${LIBPAL_SOURCES})
set_target_properties(pal_shared PROPERTIES OUTPUT_NAME pal)

target_link_libraries(pal
  # ${LIB_ANTLR4_RUNTIME}
  ${ANTLR4_LIBRARIES}
  ${GFC_LIBRARIES}
)

target_link_libraries(pal_shared
  ${ANTLR4_LIBRARIES}
  ${GFC_LIBRARIES}
)

################################################################################
#
# test_google (FORCE OBJECTIVE-C++)
#
################################################################################
add_executable(test-google
  "test/test-google.mm"
)

target_link_libraries(test-google
  pal
  gfc
  "-framework foundation"
)

set_target_properties(test-google PROPERTIES
  BUILD_WITH_INSTALL_RPATH TRUE
)
