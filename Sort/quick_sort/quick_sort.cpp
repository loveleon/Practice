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
        //�����(ilft)Ϊ��׼ֵ
        int ibase = pArry[ilft];
        while(ilft < irhs){
            //���Ҷ˿�ʼ����ɨ�裬�ҵ���һ��С�ڻ�׼ֵ,
            while(ilft<irhs && pArry[irhs] >= ibase)
                irhs--;
            //��baseС��ֵ���������lftλ��
            pArry[ilft] = pArry[irhs];
            //��������ұߣ�ֱ���ҵ�����base��ֵ
            while(ilft<irhs && pArry[ilft] <= ibase)
                ilft++;
            //������baseֵ�����ұ�
            pArry[irhs] = pArry[ilft];
        }
        //��ʱlftλ�����ֵ��С�ڵ���baseֵ���ұ߶����ڵ���baseֵ
        pArry[ilft] = ibase;
        //���ط���λ��
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

