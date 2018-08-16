#include "merge_sort.h"

int main()
{
    std::vector<int> vec = {9,1,5,3,4,2,6,8,7};
    Merge_Sort ms(&vec[0],vec.size());
    std::cout<<"ÅÅÐòÇ°:"<<"\t";
    ms.print();
    ms.merge_sort();
    std::cout<<"ÅÅÐòºó:"<<"\t";
    ms.print();
    return 0;
}
