#pragma once
#include <iostream>

namespace Sort{
    class Quick_Sort{
        public:
            Quick_Sort() = default;
            Quick_Sort(int *_pArry,int _iSize);
            int disvion(int *pArry,int ileft, int irhs);
            void quick_sort(int *pArry, int iLft, int iRhs);
            void print(int *pArry,int beg,int end)const;
            int* getArray()const{return pArray;}
            int getSize()const{return iSize;}
        private:
            int *pArray;
            int iSize;
    };//class Quick_Sort
}//namespace Sort
