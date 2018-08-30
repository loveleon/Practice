#include <string>
#include <iostream>
#include "tbsys/fileutil.h"

int main()
{
    std::string path = "/tmp/tbsys/fileutil/test.txt";
    auto ret = tbsys::CFileUtil::mkdirs(const_cast<char *>(path.c_str()));
    std::cout << "mkdir return success?" << std::boolalpha << ret << std::endl;
    std::cout << "isDirectory?" << std::boolalpha << tbsys::CFileUtil::isDirectory(const_cast<char *>(path.c_str())) << std::endl;
    std::cout << "isSymLink?" << std::boolalpha << tbsys::CFileUtil::isSymLink("/tmp/tbsys/fileutil/linkfile") << std::endl;
    return 0;
}

