#include "select_sort.h"
#include <vector>
using std::vector;

int main()
{
    vector<int> vec = {3,5,2,8,1,2,0,8,4,1};
    Select_Sort ss(&vec[0],vec.size());
    std::cout << "ÅÅÐòÇ°:" << "\t";
    ss.print();
    ss.select_sort();
    std::cout <<"ÅÅÐòºó:" << "\t";
    ss.print();

    return 0;
}
