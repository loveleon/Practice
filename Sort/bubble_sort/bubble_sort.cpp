#include "bubble_sort.h"
#include <algorithm>

namespace Sort {
Bubble_Sort::Bubble_Sort(int * _ptArr,size_t sz):ptArr(_ptArr),iSize(sz)
{
}

void Bubble_Sort::bubble_sort()
{
//    int Temp = 0;//use for swap temp value.
    for(size_t i=0; i<iSize-1; i++)
    {
        for(size_t j = iSize-1; j>i; j--)
        {
            if(ptArr[j-1] > ptArr[j])
            {
                /*
                Temp  = ptArr[j-1];
                ptArr[j-1] = ptArr[j];
                ptArr[j] = Temp;
                */
//*
                ptArr[j-1] ^= ptArr[j];
                ptArr[j]   ^= ptArr[j-1];
                ptArr[j-1] ^= ptArr[j];
//                */
            }
        }
    }
}

void Bubble_Sort::bubble_sort_flag()
{
    bool bFlag = false;
    for(size_t i=0;i < iSize - 1;++i)
    {
        bFlag = false;
        for(size_t j = iSize - 1;j > i;--j)
        {
            if(ptArr[j - 1] > ptArr[j])
            {
                ptArr[j-1] ^= ptArr[j];
                ptArr[j]   ^= ptArr[j-1];
                ptArr[j-1] ^= ptArr[j];
                bFlag = true;
            }

        }
        if(!bFlag){
            break;
        }
    }
}

void Bubble_Sort::print()const
{
    std::for_each(ptArr,ptArr+iSize,[](const int& t){std::cout << t << " ";});
    std::cout << std::endl;
}


void Bubble_Sort::print_test()const
{
    std::cout << "test" << std::endl;
}
}// namespace Sort
