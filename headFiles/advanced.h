#ifndef ADVANCED
#define ADVANCED

#include "primary.h"

class ADBackuper : public primaryBackuper
{

public:
    ADBackuper();
    ~ADBackuper();

    bool AllFile(string sourceFile, string targetFile);    // 用于整合备份四种文件，管道，链接，普通，目录
    bool backupLINK(string sourcefile, string targetfile); // 备份软链接
    bool backupFIFO(string sourcefile, string targetfile); // 备份管道
    bool ADBackupDir(string sourceDir, string targetDir);  // 包含四种文件类型的目录备份功能
    bool ADmoveFileOrDir(string source, string target);    // 兼容性移动文件或目录
    vector<string> listFilesInDirectory(const std::string& path); // 列出目录下的所有文件
    void compareDirectories(const std::string& dir1, const std::string& dir2);     // 比较两个目录不同之处
};
#endif

