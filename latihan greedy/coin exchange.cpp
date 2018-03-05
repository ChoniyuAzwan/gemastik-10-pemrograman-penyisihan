#include<iostream>
using namespace std;

main() {
    int data[99] = {NULL};
    int s[99] = {NULL};
    int a;
    int sumS = 0;
    int c, j;

    int x, i=0, indexData, indexHasil=0;

    cout << "masukkan banyak jenis koin : ";
    cin >> indexData;

    for(int p=0; p<indexData; p++) {
        cout << "masukkan koin ke " << p+1 << " : ";
        cin >> data[p];
    }

    cout << "masukkan total uang yang akan ditukar : ";
    cin >> a;
    c=a;

    while(s[i] != NULL) {
        sumS += s[i];
    }
    //data kandidat harus terurut terlebih dahulu secara ascending
	x = data[indexData-1];
    while(sumS != a || indexData>0) {
    	while(x > c) {
    		indexData--;
	    	x = data[indexData-1];
    	}
        c = c-x;

        s[indexHasil] = x;
        indexHasil++;

        sumS=0;
        j=0;
		while(s[j] != NULL) {
        	sumS += s[j];
	        j++;
  		}
    }

    j=0;
    while(s[j] != NULL) {
		sumS += s[j];
	    cout << s[j] << "\t";
	    j++;
	}
}
