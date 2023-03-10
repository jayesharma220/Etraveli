#include <iostream>

using namespace std;

class HeapSort {
    int *arr;
    int size;

public:
    HeapSort(int *a, int s);
    void heapify(int i, int n);
    void sort();
    void display();
};

HeapSort::HeapSort(int *a, int s) {
    arr = a;
    size = s;
}

void HeapSort::heapify(int i, int n) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(largest, n);
    }
}

void HeapSort::sort() {
    for (int i = size/2 - 1; i >= 0; i--) {
        heapify(i, size);
    }

    for (int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(0, i);
    }
}

void HeapSort::display() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


