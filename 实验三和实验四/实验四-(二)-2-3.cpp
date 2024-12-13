#include <iostream>
using namespace std;

void sortArray(int* arr, int size);
void inputArray(int** arr, int* size);
void printArray(const int* arr, int size);
void deleteArray(int** arr);

int main() {
    int* array = nullptr; 
    int size = 0;         

    inputArray(&array, &size);
    sortArray(array, size);
    printArray(array, size);
    deleteArray(&array);

    return 0;
}


void inputArray(int** arr, int* size) {
    cout << "请输入数组的大小: ";
    cin >> *size;
    *arr = new int[*size]; 
    cout << "请输入数组元素: ";
    for (int i = 0; i < *size; ++i) {
        cin >> (*arr)[i];
    }
}


void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(const int* arr, int size) {
    cout << "排序后的数组元素为: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteArray(int** arr) {
    delete[] * arr;
    *arr = nullptr; 
}
