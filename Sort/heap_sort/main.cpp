#include "heap_sort.h"

int main()
{
    std::vector<int> vec = {1,3,4,5,2,6,9,8,0};
    Heap_Sort hs(&vec[0],vec.size());
    std::cout << "排序前:\t";
    hs.print();
    hs.heap_sort();
    std::cout <<"排序后:\t";
    hs.print();

    return 0;
}
