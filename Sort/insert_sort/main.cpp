#include "insert_sort.h"
#include <vector>
#include <iostream>
using std::vector;
int main()
{
    vector<int> vec = {6,3,3,5,6,3,1,0,6,4};
    std::cout <<"vec size:" << vec.size();
    Insert_Sort is(&vec[0],vec.size());
    std::cout << "排序前\t";
    is.print(is.getParr(),0,is.getSize()-1);
    //is.insert_sort(is.getParr(),is.getSize());
    is.insert_sort(is.parr,is.size);
    std::cout << "排序后\t";
    is.print(is.getParr(),0,is.getSize()-1);
    return 0;
}
