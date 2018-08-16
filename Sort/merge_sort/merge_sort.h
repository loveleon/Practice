#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Merge_Sort{
    public:
        Merge_Sort(){};
        Merge_Sort(int *_parr,int _size):parr(_parr),size(_size){}
        void print()const;
        void merge_sort();
    private:
        void merge(int low,int mid,int high);
        void mergepass(int gap);
    private:
        int *parr;
        int size;
};
