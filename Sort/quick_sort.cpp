#include "quick_sort.h"
#include <algorithm>

namespace Sort{
    Quick_Sort::Quick_Sort(int *_pArry,int _iSize):pArray(_pArry),iSize(_iSize)
    {
    }

    void Quick_Sort::print(int *pArry,int beg, int end)const
    {
        for(int i=0;i<beg;i++)
            std::cout << " ";
        for(int j=beg;j<=end;j++)
            std::cout << pArry[j] << " ";
        std::cout << std::endl;
    }

    int Quick_Sort::disvion(int *pArry, int ilft, int irhs)
    {
        //以最左边值为基准
        int ibase = pArry[ilft];
        while(ilft < irhs){
            while(ilft<irhs && pArry[irhs] >= ibase)
                irhs--;
            pArry[ilft] = pArry[irhs];
            while(ilft<irhs && pArry[ilft] <= ibase)
                ilft++;
            pArry[irhs] = pArry[ilft];
        }
        pArry[ilft] = ibase;
        return ilft;
    }

    void Quick_Sort::quick_sort(int *pArry,int lft, int rhs)
    {
        if(lft < rhs)
        {
            int base = disvion(pArry,lft,rhs);
            std::cout << "base = \t" << pArry[base];
            print(pArry,lft,rhs);
            quick_sort(pArry,lft,base-1);
            quick_sort(pArry,base+1,rhs);
        }
    }
}

