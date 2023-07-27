#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize a 2D array of size n x m
    int arr[n][m];

    // Input the array elements
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // Traverse the array in reverse and print the elements in reverse
    for(int i=n-1; i>=0; i--) {
        for(int j=m-1; j>=0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
