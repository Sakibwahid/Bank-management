#include <iostream>
using namespace std;

void shiftArray(int arr[], int n, int x) {

    for (int i = 0; i < x; i++) {
   
        int temp = arr[n-1];
   
        for (int j = n-2; j >= 0; j--) {
            arr[j+1] = arr[j];
        }
     
        arr[0] = temp;
    }
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    shiftArray(arr, n, x);
    return 0;
}
