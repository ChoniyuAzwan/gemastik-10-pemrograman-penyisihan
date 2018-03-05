#include<iostream>
using namespace std;

main() {
    int n;
    cin >> n;
    cout << n;
    if(n>0 && n<=100000) {
        short a[n], b[n], c[n], sum=0;

        for(short i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]<1 || a[i]>100 || cin.fail()) {
                return 0;
            }
        }

        for(short i=0; i<n; i++) {
            cin >> b[i];
            if(b[i]<1 || b[i]>100 || cin.fail()) {
                return 0;
            }
        }

        for(short i=0; i<n; i++) {
            sum += a[i]+b[i];
        }

        sum *= 2;

        cout << sum << endl;
    }
}
