#include <iostream>
using namespace std;

float min(float a[], int n) {
    float min_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }
    return min_val;
}

int main() {
    int n;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    float min_val = min(a, n);
   cout << "The minimum value among the first " << n << " elements is: " << min_val << std::endl;
    return 0;
}



