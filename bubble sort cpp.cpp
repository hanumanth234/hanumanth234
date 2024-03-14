#include <iostream>

int main() {
    int i, j, n, min, swap;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    int array[n];
    std::cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i) {
            swap = array[i];
            array[i] = array[min];
            array[min] = swap;
        }
    }
    std::cout << "The sorted array:\n";
    for (i = 0; i < n; i++)
        std::cout << array[i] << "\t";
    return 0;
}
