#include "heap_sort.h"

void Heap_Sort::print()const
{
    std::for_each(parr,parr+size,[](const int& i){std::cout << i << "\t";});
    std::cout << std::endl;
}

/*1.初始父节点和左孩子节点值
 *2.判断左节点<右节点，
 *3.若父节点>child节点，退出
 *4.重置parent=child，child=2*child+1
 */
void Heap_Sort::heap_adjust(int parent,int length)
{
    int temp = parr[parent];
    int child = 2*parent+1;

    while(child < length)
    {
        if(child+1 < length && parr[child] < parr[child+1])
            child++;
        if(temp > parr[child])
            break;

        parr[parent] = parr[child];

        parent = child;
        child = child*2+1;
    }
    parr[parent] = temp;
}

/*1.循环建立堆
 *2.排序
 *
 *
 */
void Heap_Sort::heap_sort()
{
    for(int i=size/2;i>=0;i--)
        heap_adjust(i,size);

    //n-1 循环排序
    for(int i = size-1;i>0;i--)
    {
        int temp = parr[i];
        parr[i] = parr[0];
        parr[0] = temp;
        heap_adjust(0,i);
        std::cout << "i = " << size - i << "\t";
        print();
    }
}
