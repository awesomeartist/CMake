Windows 配置 CMake 使用 mingw 编译器
---
1. CMakeLists.txt 添加下面两个设置命令
```cmake
set (CMAKE_C_COMPILER "F:/MinGW/bin/gcc.exe")
set (CMAKE_CXX_COMPILER "F:/MinGW/bin/g++.exe")
```
2. gcc.exe ， g++.exe 不能仅写为 gcc，g++，必须是完整文件名，否则 powershell 中会报错


3. 命令行编译为makefile时： CMAKE .. -G "MinGW Makefiles"
参数部分必须写，否则系统仍然按照VS2019 执行，生成VS2019的项目文件

4. 如果要更改编译器，需要将文件夹内已经生成的文件完全删除。