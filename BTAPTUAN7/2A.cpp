#include <iostream>

void f(int *arr) {
    std::cout << "Size of array inside function: " <<sizeof(arr)/sizeof(arr[0]);
}

int main() {
    int A[] = {1, 2, 3, 4};

    std::cout << "Size of array outside function: " << sizeof(A) / sizeof(A[0]) << std::endl;

    f(A);

    return 0;
}
