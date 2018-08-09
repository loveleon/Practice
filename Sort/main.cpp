#include "quick_sort.h"

int main(){
    int array[] = {9,18,12,6,2,21,25,30,1,4,3,4};
    Sort::Quick_Sort qs(array,sizeof(array)/sizeof(int));
    std::cout << "before quick sort :" << std::endl;
    qs.print(qs.getArray(),0,sizeof(array)/sizeof(int)-1);
    qs.quick_sort(qs.getArray(),0,qs.getSize());

    std::cout << "after quick sort :" << std::endl;
    qs.print(qs.getArray(),0,sizeof(array)/sizeof(int)-1);

    return 0;
}
