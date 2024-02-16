#include <iostream>
using namespace std;

void insertIntoArray(int arr[], int& size, int value, int position) {
    // Ensure there's space and the position is within bounds
    if (size >= 5 || position > size || position < 0) {
        cout << "Insertion failed. Array may be full or position out of bounds." << endl;
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = value;
    ++size; // Update the size
}

void deleteFromArray(int arr[], int& size, int position) {
    if (position >= size || position < 0) {
        cout << "Deletion failed. Position out of bounds." << endl;
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size; // Update the size
}

int main() {
    // Declaration and Initialization
    int arr[5] = { 1, 2, 3, 4, 5 };
    int size = 5; // Current size of the array

    // Insertion
    cout << "Inserting 6 at position 2:" << endl;
    insertIntoArray(arr, size, 6, 2);

    // Iterating over elements to show insertion result
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deletion
    cout << "Deleting element at position 3:" << endl;
    deleteFromArray(arr, size, 3);

    // Iterating over elements to show deletion result
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
