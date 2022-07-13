### 一、关于lanch.json和tasks.json
- launch.json文件用于调试代码（vscode基于.json文件进行相关配置，如setting.json）
- tasks.json文件用于生成可执行文件，在调试时launch.json调用tasks.json重新生成可执行文件
- 调用的前提是launch.json中preLaunchTask的映射值与Tasks.json中文件中的label映射值一样
- 调试工具设置：launch.json文件中miDebuggerPath的映射值
- 在文件较少，结构比较简单时可以直接修改tasks.json中的命令选项生成可执行文件或进行调试

### 二、使用cmake
 > 在文件较多以及工程结构较为复杂时使用makefile可对工程进行较好的组织编译调试工作  
 makefile文件不容易编写，借助cmake可以间接生成makefile，开发者需要做的是编写CMakeLists.txt供cmke使用

 - 编写CMakeLists.txt
 - 在vscode命令栏输入cmake，选择配置cmake
 - 在终端命令行进入生成的build文件，执行命令cmake ..生成makefile等相关文件
 - 接着由于本机mingw提供的是mingw32-make.exe，在命令行输入mingw32-make.exe，根据makefile编译链接生成可执行文件

 ### 三、调试程序
 - 在不使用cmake时
    - 简单修改tasks.json编译命令即可
 - 在使用cmake时
    - 需要修改launch.json中program映射值，指向生成的可执行文件
    - 可执行文件的生成可以手动使用cmake生成，或者修改tasks.json中的内容使调试时自动生成（Cmake-v2中提供示例）
    - 调试工具设置：launch.json文件中miDebuggerPath的映射值



[参考视频](https://www.bilibili.com/video/BV13K411M78v?share_source=copy_web)