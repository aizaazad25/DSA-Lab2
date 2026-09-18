#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {

    // Stack allocation
    int iValue = 50;

    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

    // Heap allocation
    int *heapValue = new int;
    *heapValue = 100;

    cout << "\nHeap variable:" << endl;
    analyze_pointer(heapValue);

    // Free heap memory
    delete heapValue;

    return 0;
}