#include "merge_sort.h"
void Merge_Sort::print()const{
    std::for_each(parr,parr+size,[](const int& i){ std::cout << i << "\t"; });
    std::cout << std::endl;
}

void Merge_Sort::merge(int low,int mid,int high)
{
    int i = low;
    int j = mid + 1;
    int k  = 0;//存放临时索引
    int *arr = new int[(high-low+1)];

    while(i <= mid && j <= high)
    {
        if(parr[i] <= parr[j])
        {
            arr[k++] = parr[i++];
        }else
        {
            arr[k++] = parr[j++];
        }
    }

    while(i<=mid)
    {
        arr[k++] = parr[i++];
    }

    while(j<=high)
    {
        arr[k++] = parr[j++];
    }

    for(k=0,i=low;i<=high;i++,k++)
        parr[i] = arr[k];
    delete []arr;
}

//按步长合并排序
//注意最后单独排序边界条件：<size
void Merge_Sort::mergepass(int gap)
{
    int i;
    for(i=0;i+2*gap-1 < size;i=i+2*gap)
    {
        merge(i,i+gap-1,i+2*gap-1);
    }

    if(i+gap-1 < size)
        merge(i,i+gap-1,size-1);
}

void Merge_Sort::merge_sort()
{
    for(int gap=1;gap < size;gap=2*gap)
    {
        mergepass(gap);
        std::cout << "gap = " << gap << "\t";
        print();
    }
}
