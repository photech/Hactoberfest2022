#include <iostream>
#include <stack>
using namespace std;

// Function to swap elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to print the array
void printArray(const int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Function to find the median of three values
int medianOfThree(int array[], int low, int high) {
    int mid = low + (high - low) / 2;
    if (array[low] > array[mid]) swap(array[low], array[mid]);
    if (array[low] > array[high]) swap(array[low], array[high]);
    if (array[mid] > array[high]) swap(array[mid], array[high]);
    return array[mid]; // Return the median as the pivot
}

// Function to rearrange array (find the partition point)
int partition(int array[], int low, int high) {
    // Use the median of three to select pivot
    int pivot = medianOfThree(array, low, high);
    
    // Move pivot to the end
    swap(array[high], pivot);

    int i = low - 1; // pointer for the smaller element

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++; // increment the smaller element index
            swap(array[i], array[j]); // swap elements
        }
    }
    swap(array[i + 1], array[high]); // swap the pivot element back
    return i + 1; // return the partition point
}

void quickSort(int array[], int low, int high) {
    stack<int> stack; // create an explicit stack to manage subarray indices
    stack.push(low);
    stack.push(high);

    while (!stack.empty()) {
        high = stack.top(); stack.pop();
        low = stack.top(); stack.pop();

        if (low < high) {
            int pi = partition(array, low, high); // partitioning index

            // Push left side to stack
            stack.push(low);
            stack.push(pi - 1);

            // Push right side to stack
            stack.push(pi + 1);
            stack.push(high);
        }
    }
}

// Driver code
int main() {
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printArray(data, n);

    quickSort(data, 0, n - 1); // perform quicksort on data

    cout << "Sorted array in ascending order: \n";
    printArray(data, n);
    
    return 0;
}
