Windows 平台下 VSCode + mingw64 + CMake 构建多源文件工程
---
### 一、关于lanch.json、tasks.json以及 c_cpp_properties.json

- tasks.json （vscode基于.json文件进行相关配置，如setting.json）文件用于生成可执行文件，在文件较少，结构比较简单时可以直接修改tasks.json中的命令选项生成可执行文件或进行调试。在调试时launch.json 调用 tasks.json 重新生成可执行文件。
- launch.json 文件用于调试代码，调用 tasks.json 参数生成可执行文件的前提是 launch.json 中 preLaunchTask 的映射值与Tasks.json中文件中的label映射值一样
- 调试工具设置：launch.json文件中miDebuggerPath的映射值
- c_cpp_properties.json 主要用来设置包含头文件的路径，设置 C/C++ 支持的版本号等等

以上过程可以借助 C/C++ Project Generator 完成特殊设置

[参考链接](https://zhuanlan.zhihu.com/p/147366852)
### 二、使用 CMake
 > 在文件较多以及工程结构较为复杂时使用makefile可对工程进行较好的组织编译调试工作  
 makefile文件不容易编写，借助cmake可以间接生成makefile，开发者需要做的是编写CMakeLists.txt供cmake使用
 - 安装 CMake 相关插件 CMake、CMake Tools 等
 - 编写CMakeLists.txt
 - 在按ctrl + shift + p 进入 vscode 命令栏输入 cmake，选择配置 cmake 工程文件
 - 在终端命令行进入生成的 build 文件夹（外部构建），执行命令 cmake .. 生成 makefile 等相关文件
 - 接着由于本机 C/C++ 编译器 mingw64 提供的是 mingw32-make.exe，在命令行输入mingw32-make.exe，根据 makefile 编译链接生成可执行文件

 ### 三、调试程序
 调试是基于 launch.json 文件的设置进行的
 - 在不使用 cmake 时
    - 默认 launch.json 中默认指向的可执行文件即为 tasks.json 生成可执行文件的默认位置。修改文件结构后需要重新修改 tasks.json。
 - 在使用 cmake 时
    - 需要修改 launch.json 中 program 映射值，指向带调试信息的可执行文件。修改文件结构后需要重新修改 CMakeLists.txt.




[参考链接](https://www.bilibili.com/video/BV13K411M78v?share_source=copy_web)