#include "select_sort.h"

void Select_Sort::select_sort()
{
    int i=0,j=0;
    int index = 0;
    //��Ҫ���������Сֵ�Ĵ���
    for(i=0;i<size-1;i++)//��Ҫ����N����ʱ��ǰN-1�������Ѿ�������
    {
        index = i;
        //Ѱ�ҵ�i����Сֵλ��
        for(j=i+1;j<size;j++)
        {
            if(parr[index] > parr[j] )
            {
                index = j;//������Сֵ��λ��
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
