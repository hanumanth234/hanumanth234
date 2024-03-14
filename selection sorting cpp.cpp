#include <iostream>

int main() {
    int n, i, j, temp, array[10], flag = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::cout << "Enter the array elements: ";
    for (i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    for (i = 0; i < n - 1; i++) {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    std::cout << "Sorted array is:" << std::endl;
    for (i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
