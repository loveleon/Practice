#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "tbsys/config.h"
using std::ifstream;
using std::string;
using namespace tbsys;
//using namespace std;

int main()
{
    //output conf contents.
    /*
    ifstream inFile("../config_test/ns.conf",std::ios::in);
    if(inFile){
        string tmp;
        while(getline(inFile,tmp)){
            std::cout << tmp << std::endl;
        }
    }
    */
    tbsys::CConfig conf = TBSYS_CONFIG;
    conf.load("../config_test/ns.conf");
    auto val = conf.getString("public","log_size",NULL);
    std::cout <<"val:"<< val << std::endl;

    auto vec = conf.getStringList("public","test");
    for(auto it : vec)
        std::cout << it << "\t";
    std::cout << std::endl;

    std::vector<string> vec_of_string;
    auto num = conf.getSectionKey("public",vec_of_string);
    std::cout << "vector of string contents:\t"<< " total items numbers:\t" << num << std::endl;
    for(auto it : vec_of_string)
        std::cout << it << "\t";
    std::cout << std::endl;

    //getSectionName
    vec_of_string.clear();
    auto num22 = conf.getSectionName(vec_of_string);
    std::cout << "vector of string contents:\t"<< " total items numbers:\t" << num22 << std::endl;
    for(auto it : vec_of_string)
        std::cout << it << "\t";
    std::cout << std::endl;
    return 0;
}
