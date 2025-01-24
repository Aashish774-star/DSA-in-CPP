#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100];
    int size;

public:
    ArrayOperations() : size(0) {}

    void Insert(int pos, int value) {
        if (pos < 0 || pos > size) return;
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        size++;
    }

    void Delete(int pos) {
        if (pos < 0 || pos >= size) return;
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int Search(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) return i;
        }
        return -1;
    }

    int Sum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    void Display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int LinearSearch(int value) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) return i;
        }
        return -1;
    }

    int BinarySearch(int value) {
        int left = 0, right = size - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == value) return mid;
            if (arr[mid] < value) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }

    int Get(int pos) {
        if (pos < 0 || pos >= size) return -1;
        return arr[pos];
    }

    void Set(int pos, int value) {
        if (pos < 0 || pos >= size) return;
        arr[pos] = value;
    }

    int Max() {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) maxVal = arr[i];
        }
        return maxVal;
    }

    int Min() {
        int minVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < minVal) minVal = arr[i];
        }
        return minVal;
    }

    double Avg() {
        return static_cast<double>(Sum()) / size;
    }

    void Reverse() {
        for (int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }

    void InsertSort() {
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    void Rearrange() {
        int j = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] < 0) {
                if (i != j) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                j++;
            }
        }
    }

    void Merge(int arr2[], int size2) {
        for (int i = 0; i < size2; i++) {
            Insert(size, arr2[i]);
        }
    }
};

int main() {
    ArrayOperations arrayOps;
    int choice, pos, value, arr2[100], size2;

    while (true) {
        cout << "1. Insert\n2. Delete\n3. Search\n4. Sum\n5. Display\n6. Linear Search\n7. Binary Search\n8. Get\n9. Set\n10. Max\n11. Min\n12. Avg\n13. Reverse\n14. Insert Sort\n15. Rearrange\n16. Merge\n17. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Position and Value: ";
                cin >> pos >> value;
                arrayOps.Insert(pos, value);
                break;
            case 2:
                cout << "Position: ";
                cin >> pos;
                arrayOps.Delete(pos);
                break;
            case 3:
                cout << "Value: ";
                cin >> value;
                cout << "Found at: " << arrayOps.Search(value) << endl;
                break;
            case 4:
                cout << "Sum: " << arrayOps.Sum() << endl;
                break;
            case 5:
                arrayOps.Display();
                break;
            case 6:
                cout << "Value: ";
                cin >> value;
                cout << "Found at: " << arrayOps.LinearSearch(value) << endl;
                break;
            case 7:
                cout << "Value: ";
                cin >> value;
                cout << "Found at: " << arrayOps.BinarySearch(value) << endl;
                break;
            case 8:
                cout << "Position: ";
                cin >> pos;
                cout << "Value: " << arrayOps.Get(pos) << endl;
                break;
            case 9:
                cout << "Position and Value: ";
                cin >> pos >> value;
                arrayOps.Set(pos, value);
                break;
            case 10:
                cout << "Max: " << arrayOps.Max() << endl;
                break;
            case 11:
                cout << "Min: " << arrayOps.Min() << endl;
                break;
            case 12:
                cout << "Avg: " << arrayOps.Avg() << endl;
                break;
            case 13:
                arrayOps.Reverse();
                break;
            case 14:
                arrayOps.InsertSort();
                break;
            case 15:
                arrayOps.Rearrange();
                break;
            case 16:
                cout << "Enter size of second array: ";
                cin >> size2;
                cout << "Enter elements of second array: ";
                for (int i = 0; i < size2; i++) {
                    cin >> arr2[i];
                }
                arrayOps.Merge(arr2, size2);
                break;
            case 17:
                return 0;
        }
    }
}
