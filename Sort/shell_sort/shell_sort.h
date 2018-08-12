#pragma once
#include <iostream>
#include <algorithm>

class Shell_Sort{
    public:
        Shell_Sort() = default;
        Shell_Sort(int *_parr,int _size):parr(_parr),size(_size){}
        void print()const;
        void shell_sort();
    public:
        int *parr;
        int size;
};
