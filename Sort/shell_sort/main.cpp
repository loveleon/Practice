#include "shell_sort.h"
#include <vector>
using std::vector;

int main()
{
    vector<int> vec = {9,1,2,5,7,4,8,6,3,5};
    Shell_Sort ss(&vec[0],vec.size());
    std::cout << "排序前:\t";
    ss.print();
    ss.shell_sort();
    std::cout << "排序后:\t";
    ss.print();

    return 0;
}
