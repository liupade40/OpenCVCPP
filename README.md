# OpenCVCPP

**OpenCV项目配置**

1. 下载Windows版本opencv并安装
2. 配置系统环境变量：Path添加path/build/x64/vc16/bin
3. VS配置属性->VC++目录->包含目录：path/build/include
4. VS配置属性->VC++目录->库目录：path/build/x64/vc16/lib
5. VS配置属性->链接器->输入:Debug环境：opencv_worldxxd.lib；Release环境：opencv_worldxx.lib，这两个不要一起添加

注意：C++动态项目要设置不使用配置属性->C/C++->预编译头：不适用预编译头
