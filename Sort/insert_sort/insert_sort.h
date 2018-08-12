#pragma once
class Insert_Sort{
    public:
        Insert_Sort() = default;
        Insert_Sort(int* const _parr,const int _size):parr(_parr),size(_size){}
        void print(const int *parr,int beg, int end)const;
        void insert_sort(int *const parr, int size);
        int *  getParr()const{return parr;}
        int getSize()const{return size;}
    private:
    public:
        int *const parr ;
        int size = 0;
};
