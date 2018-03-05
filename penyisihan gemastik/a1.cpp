#include<iostream>
using namespace std;

main() {
    int n;
    int a;
    int b;
    int c;

    cin >> n;
    if(n==1) {
        cin >> a;
        if(cin.fail()) {
            return 0;
        }
        cin >> b;
                if(cin.fail()) {
            return 0;
        }
        c = a+b;

        cout << c << endl;
    }
}
