#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return true;
    }
    return false; // Return false if key is not found
}

int main() {
    int arr[10] = {72, 76, 85, 7, 9, 1, 5, 31, 8, 0};

    cout << "Enter the element to search for" << endl;
    int key;
    cin >> key;
    bool found = Search(arr, 10, key); // Use the correct function name
    if (found) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is absent" << endl; // Corrected typo
    }

    return 0;
}
