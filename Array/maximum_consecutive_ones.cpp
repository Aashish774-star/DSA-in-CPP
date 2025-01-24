    #include<iostream>
    using namespace std;

    int findmaxi(int arr[], int n) {
        int maxi = 0;
        int count = 0;
        for(int i = 0; i<n;i++)
        {
            if(arr[i] == 1){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count = 0;
        }
    }
    return maxi;
    }

    int main() {
        int arr[] = {1, 1, 0, 1, 1, 0,1,0,1,1,0};
        int n = sizeof(arr) / sizeof(arr[0]);
        int maxi = findmaxi(arr, n);
        cout << maxi << endl;
        return 0;
    }