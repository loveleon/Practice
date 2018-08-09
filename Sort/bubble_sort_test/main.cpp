#include "bubble_sort.h"

//using namespace Sort;
int main()
{
    int iArray[] = {9,8,6,7,3,5,2,1};
    int *piArr = iArray;
    Sort::Bubble_Sort c = {piArr,8};
    c.bubble_sort();
    c.print();
    Sort::Bubble_Sort cc(iArray,sizeof(iArray)/sizeof(int));
    cc.bubble_sort();
    cc.print();
    return 0;
}
