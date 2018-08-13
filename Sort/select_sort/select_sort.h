#pragma once
#include <iostream>
#include <algorithm>

class Select_Sort{
    public:
        Select_Sort(int *_parr,int _size):parr(_parr),size(_size){}
        void print()const;
        void select_sort();
    public:
        int *parr;
        int size;
};
