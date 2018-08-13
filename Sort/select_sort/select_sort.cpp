#include "select_sort.h"

void Select_Sort::select_sort()
{
    int i=0,j=0;
    int index = 0;
    //需要遍历获得最小值的次数
    for(i=0;i<size-1;i++)//当要排序N个数时候，前N-1个序列已经是有序
    {
        index = i;
        //寻找第i个最小值位置
        for(j=i+1;j<size;j++)
        {
            if(parr[index] > parr[j] )
            {
                index = j;//保存最小值的位置
            }
        }

        int temp = parr[index];
        parr[index] = parr[i];
        parr[i] = temp;
        std::cout << " i = " << i+1 <<"\t";
        print();
    }
}

void Select_Sort::print()const
{
    std::for_each(parr,parr+size,[](const int &i){std::cout << i << "\t";});
    std::cout << std::endl;
}
