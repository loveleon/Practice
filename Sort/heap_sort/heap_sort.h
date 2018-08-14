#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
class Heap_Sort{
    public:
        Heap_Sort(int *_parr,int _size):parr(_parr),size(_size){}
        void print()const;
        void heap_sort();
        void heap_adjust(int parent,int length);
    public:
        int *parr;
        int size;
};
