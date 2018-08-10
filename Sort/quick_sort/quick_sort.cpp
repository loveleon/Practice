#include "quick_sort.h"
#include <algorithm>

namespace Sort{
    Quick_Sort::Quick_Sort(int *_pArry,int _iSize):pArray(_pArry),iSize(_iSize)
    {
    }

    void Quick_Sort::print(int *pArry,int beg, int end)const
    {
        for(int i=0;i<beg;i++)
            std::cout << "\t";
        for(int j=beg;j<=end;j++)
            std::cout << pArry[j] << "\t";
        std::cout << std::endl;
    }

    int Quick_Sort::disvion(int *pArry, int ilft, int irhs)
    {
        //最左端(ilft)为基准值
        int ibase = pArry[ilft];
        while(ilft < irhs){
            //从右端开始向左扫描，找到第一个小于基准值,
            while(ilft<irhs && pArry[irhs] >= ibase)
                irhs--;
            //比base小的值，放在左边lft位置
            pArry[ilft] = pArry[irhs];
            //从左边向右边，直到找到大于base的值
            while(ilft<irhs && pArry[ilft] <= ibase)
                ilft++;
            //将大于base值放在右边
            pArry[irhs] = pArry[ilft];
        }
        //此时lft位置左边值都小于等于base值，右边都大于等于base值
        pArry[ilft] = ibase;
        //返回分治位置
        return ilft;
    }

    void Quick_Sort::quick_sort(int *pArry,int lft, int rhs)
    {
        if(lft < rhs)
        {
            int base = disvion(pArry,lft,rhs);
            std::cout << "base = " << pArry[base] << "\t";
            print(pArry,lft,rhs);
            quick_sort(pArry,lft,base-1);
            quick_sort(pArry,base+1,rhs);
        }
    }
}

