#include "insert_sort.h"
#include <iostream>
void Insert_Sort::print(const int *parr,int beg, int end)const
{
    for(int i = 0; i< beg; i++){
        std::cout << "\t";
    }

    for(int i = beg;i<=end;i++)
    {
        std::cout << parr[i] << "\t";
    }
    std::cout << std::endl;
}

void Insert_Sort::insert_sort(int * const parr, int size)
{
    int i = 0;
    std::cout << "i = " << 0 << "\t";
    print(parr,0,0);
    for( i=1;i<size;i++)
    {
        int j = 0;
        int temp = parr[i];
        for( j = i-1;j>=0 && temp < parr[j];j--)
        {
            parr[j+1] = parr[j];
        }
        parr[j+1] = temp;
        std::cout << "i = " << i << "\t";
        print(parr,0,i);
    }
}
