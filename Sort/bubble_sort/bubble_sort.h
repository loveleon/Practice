#pragma once
#include <iostream>
namespace Sort{
    class Bubble_Sort{
        public:
            typedef std::size_t size_t;
        public:
            Bubble_Sort() = default;
            Bubble_Sort(int * _ptArr,size_t sz);
            void bubble_sort();
            void bubble_sort_flag();
            void print()const;
            void print_test()const;
        private:
            int* ptArr;
            size_t iSize;
    };

} // namespace Sort
