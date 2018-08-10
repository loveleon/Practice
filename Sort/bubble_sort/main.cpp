#include "bubble_sort.h"

//using namespace Sort;
int main()
{
    int iArray[] = {9,8,6,7,3,5,2,1};
    int iArrSort[] = {1,2,3,4,5,6,7,8,9};
    int *piArr = iArray;
    Sort::Bubble_Sort c = {piArr,8};
    c.bubble_sort();
    c.print();
    Sort::Bubble_Sort cc(iArrSort,sizeof(iArray)/sizeof(int));
//    cc.bubble_sort();
    cc.bubble_sort_flag();
    cc.print();
    return 0;
}
