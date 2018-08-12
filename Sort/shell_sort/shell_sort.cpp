#include "shell_sort.h"
void Shell_Sort::print()const
{
    std::for_each(parr,parr+size,[](const int i){std::cout << i << "\t";});
    std::cout << std::endl;
}

void Shell_Sort::shell_sort()
{
    //步长
    int gap = size/2;
    int i=0,j=0;
    while(1 <= gap){
        //把距离为gap的分成一组，扫描所有的组
        for(i = gap;i<size;i++)
        {
            int temp = parr[i];
            //距离为gap的组，排序
            for(j=i-gap; j>=0 && temp < parr[j];j-=gap)
            {
                parr[j+gap] = parr[j];
            }
            parr[j+gap] = temp;
        }
        std::cout << "gap=" << gap << "\t";
        print();
        gap = gap/2;//减少步长，最终为1
    }
}
