#include <iostream>

class SortingStrategy {
public:
    virtual void sort(int arr[], int size) = 0;
};

class BubbleSort : public SortingStrategy {
public:
    void sort(int arr[], int size) override {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j], arr[j + 1]);
                }
            }
        }
        std::cout << "Sorted using Bubble Sort." << std::endl;
    }
};

class QuickSort : public SortingStrategy {
public:
    void sort(int arr[], int size) override {
        // Quick sort implementation (omitted for brevity)
        std::cout << "Sorted using Quick Sort." << std::endl;
    }
};

class Sorter {
private:
    SortingStrategy* strategy;

public:
    void setStrategy(SortingStrategy* newStrategy) {
        strategy = newStrategy;
    }

    void sort(int arr[], int size) {
        strategy->sort(arr, size);
    }
};

int main() {
    Sorter sorter;
    int arr[] = {5, 3, 8, 6, 2};

    sorter.setStrategy(new BubbleSort());
    sorter.sort(arr, 5);

    // Clean up
    delete sorter.setStrategy(new BubbleSort());
    return 0;
}
