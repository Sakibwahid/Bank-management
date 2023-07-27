#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int x;
        cin >> x;

        int found_index = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                found_index = i;
                break;
            }
        }

        if (found_index != -1) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
