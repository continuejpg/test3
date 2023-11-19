// main.cpp

#include "bubblesort.h"
#include <iostream>

int main() {
    const int size = 5;
    int myArray[size] = {5, 3, 8, 2, 1};

    // 调用冒泡排序函数
    bubblesort1A(myArray, size);

    // 输出排序后的数组
    for (int i = 0; i < size; i++) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
