#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

float findAverage(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<float>(sum) / size;
}

void insertElement(int arr[], int& size, int element, int position) {
    if (position > size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

void deleteElement(int arr[], int& size, int position) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int choice;

    do {
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "--- Array Operations Menu ---" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Find Average of Array Elements" << endl;
        cout << "3. Insert Element to Array" << endl;
        cout << "4. Delete Element from Array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2: {
                float average = findAverage(arr, size);
                cout << "Average of array elements: " << average << endl;
                break;
            }
            case 3: {
                int element, position;
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position (0 to " << size << "): ";
                cin >> position;
                insertElement(arr, size, element, position);
                break;
            }
            case 4: {
                int position;
                cout << "Enter the position (0 to " << size - 1 << ") of element to delete: ";
                cin >> position;
                deleteElement(arr, size, position);
                break;
            }
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
