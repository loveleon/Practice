#include <string>
#include <iostream>
#include "tbsys/process.h"

int main(){
    std::string pidfile("/tmp/tbsys/pidfile");
    std::string logfile("/tmp/tbsys/logfile.txt");

    auto ret = tbsys::CProcess::startDaemon(pidfile.c_str(),logfile.c_str());

    std::cout << "ret:" << ret << std::endl;
    while(1)
        ;

    return 0;
}
