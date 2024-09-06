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

set(GFC                     "gfc")
#set(ANTLR4_RUNTIME          "antlr4-cpp-runtime-4.13.1")
set(ANTLR4_RUNTIME          "antlr4-4.9.3/runtime/cpp")
set(LIB_ANTLR4_RUNTIME      "antlr4-runtime")

set(WITH_GFC_CRYPTO OFF CACHE BOOL "gfc crypto" FORCE)
set(WITH_GFC_JVM OFF CACHE BOOL "gfc jvm" FORCE)
set(WITH_GFC_LUA OFF CACHE BOOL "gfc lua" FORCE)
add_subdirectory("3rd/${GFC}")

include_directories(
  "3rd/${ANTLR4_RUNTIME}/runtime/src"
  "3rd/${GFC}/include"
  "gen"
  "src"
)

link_directories(
  "${CMAKE_BINARY_DIR}/3rd/${ANTLR4_RUNTIME}/runtime"
  "3rd/${ANTLR4_RUNTIME}/dist"
)

# add_custom_command(OUTPUT ${LIB_ANTLR4_RUNTIME}_OUT
#   COMMAND mkdir -p ${CMAKE_BINARY_DIR}/3rd/${ANTLR4_RUNTIME}
#   COMMAND cmake -B ${CMAKE_BINARY_DIR}/3rd/${ANTLR4_RUNTIME} -S ${CMAKE_SOURCE_DIR}/3rd/${ANTLR4_RUNTIME}
#   COMMAND make -C ${CMAKE_BINARY_DIR}/3rd/${ANTLR4_RUNTIME}
# )
# add_custom_target(${LIB_ANTLR4_RUNTIME} ALL
#   DEPENDS ${LIB_ANTLR4_RUNTIME}_OUT
# )

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

# add_dependencies(pal_shared
#   ${LIB_ANTLR4_RUNTIME}
# )

target_link_libraries(pal
  libantlr4-runtime.a
  gfc
)

target_link_libraries(pal_shared
  libantlr4-runtime.dylib
  gfc
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
  libantlr4-runtime.a
  pal
  gfc
  "-framework foundation"
)