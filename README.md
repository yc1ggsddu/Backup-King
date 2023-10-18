# 本软件是基于C++实现的linux(Ubuntu)下的文件备份软件

## 实现功能

1. 数据备份及还原（基础功能）
2. 不同文件类型支持（支持管道、软硬链接和目录的备份）
3. 元数据支持：支持对特定文件系统的文件元数据还原  
4. 压缩解压：通过文件压缩节省备份文件的存储空间  
5. 打包解包：将所有备份文件拼接为一个大文件保存  
6. 加密解密：由用户指定密码，将所有备份文件均加密保存  

## 使用方法

1. 在makefile目录下运行makefile文件后即可产生test文件
2. 运行test文件，根据对应提示操作即可

## P.S.

`.bo` 表示打包文件

`.co`表示压缩文件

`.en`表示加密文件

