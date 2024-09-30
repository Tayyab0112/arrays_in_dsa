#include <iostream>

template<typename T>
void rightRotateArray(T arr[], int size) {
    // Store the last element
    T lastElement = arr[size - 1];
    
    // Iterate from the end to the beginning
    for (int i = size - 1; i > 0; i--) {
        // Shift each element to the right
        arr[i] = arr[i - 1];
    }
    
    // Place the last element at the beginning
    arr[0] = lastElement;
}

// Function to print the array
template<typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";
    printArray(array, size);

    rightRotateArray(array, size);

    std::cout << "Rotated array: ";
    printArray(array, size);

    return 0;
}
