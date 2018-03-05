#include<iostream>
using namespace std;

main() {
    short n;
    cin >> n;
    if(n>0 && n<=100000) {
        short a[n], b[n], c[n], sumA = 0, sumB=0, sum=0;

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
            for(short j=0; j<n; j++) {
                sumA = sumA + (a[i]+b[j]);
            }
        }

        cout << sumA << endl;
    }
}
