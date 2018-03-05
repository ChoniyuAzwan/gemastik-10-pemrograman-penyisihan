#include<iostream>
using namespace std;

main() {
	int t, k;

	struct data {
		string jenis;
		int jumlah;
		string nama[99];
	} foto[99];

	int hasil[99];

    cout << "masukkan banyak kasus : ";
    cin >> t;

    for(int i=0; i<t; i++) {
    	cout << "masukkan banyak foto : ";
	    cin >> k;

	    hasil[i] = 0;

	    for(int j=0; j<k; j++) {
	    	cout << "masukkan jenis foto, banyak orang : ";
		    cin >> foto[j].jenis;

		    cin >> foto[j].jumlah;

		    for(int p=0; p<foto[j].jumlah; p++) {
				cin >> foto[j].nama[p];

				for(int q=0; q<=j; q++) {
					if(foto[j].nama[p]) {

					}
				}
		    }


		    if(foto[j].jenis == "dibantu") {
		    	hasil[i] += foto[j].jumlah+1;
		    } else if(foto[j].jenis == "selfie") {
		    	hasil[i] += foto[j].jumlah;
		    }
	    }
    }

    cout << endl << endl;

    for(int i=0; i<t; i++) {
    	cout << hasil[i] << endl;
    }

}
