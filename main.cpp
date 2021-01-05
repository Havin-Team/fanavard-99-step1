#include <iostream>
using namespace std;

int main() {
    int n, m, k, i, s=0, *a;
    cin >> n >> m >> k;
    a = new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    i=n-1;
    while(m!=0 && i>-1){
        if(s+a[i]>k){
            m--;
            s=0;
        }else{
            s+=a[i];
            i--;
        }
    }
    cout << n-1-i;
    delete[] a;
    return 0;
}
