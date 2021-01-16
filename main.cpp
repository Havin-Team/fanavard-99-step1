#include <iostream>

using namespace std;

int main() {

    int n; // object count
    int m; // box count
    int k; // box size
    int *a; // objects size
    int i; // loop index (temp variable)
    int s = 0; //sum size of selected objects for box

    //get inputs
    cin >> n >> m >> k;
    a = new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    //main logic
    i = n - 1;
    while (m != 0 && i > -1) { //while have box and object
        if (s + a[i] > k) { //can't put object
            m--;
            s = 0;
        } else { // put object
            s += a[i];
            i--;
        }
    }

    //print result
    cout << n - 1 - i << endl;

    //memory cleanup
    delete[] a;

    return 0;
}
