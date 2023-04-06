PROJECT (HELLO)

SET (SRC_LIST main.cpp)

SET (CMAKE_C_COMPILER "C:/Code-lib/mingw64/bin/gcc.exe")
SET (CMAKE_CXX_COMPILER "C:/Code-lib/mingw64/bin/g++.exe")

MESSAGE (STATUS "This is BINARY dir " ${HELLO_BINARY_DIR})

MESSAGE (STATUS "This is SOURCE dir " ${HELLO_SOURCE_DIR})

ADD_EXECUTABLE (hello ${SRC_LIST})