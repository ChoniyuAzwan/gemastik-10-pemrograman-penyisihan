#include<iostream>
#include<string>
#include<cctype>
using namespace std;

main() {
	int t, k;

	struct data {
		string jenis;
		int jumlah;
		string nama[99];
	} foto;

	int hasil[99];

	string cekNama[99];

    // cout << "masukkan banyak kasus : ";
    cin >> t;

    if(t<1 || t>5) {
    	return 0;
    }

    for(int i=0; i<t; i++) {
    	// cout << "masukkan banyak foto : ";
	    cin >> k;

	    if(k<1 || k>1) {
	    	return 0;
	    }

	    for(int j=0; j<k; j++) {
	    	//cout << "masukkan jenis foto, banyak orang : ";
		    cin >> foto.jenis;

		    cin >> foto.jumlah;
		    if(foto.jumlah<1 || k>10) {
		    	return 0;
		    }

		    for(int p=0; p<foto.jumlah; p++) {
				cin >> foto.nama[p];
				cekNama[p] = foto.nama[p];
				for(int q=0; q<p; q++) {
					if(foto.nama[p] == cekNama[q]) {
						goto keluar;
						return 0;
					}
				}
		    }
	    }

	    if(foto.jenis == "dibantu") {
	    	hasil[i] = foto.jumlah+1;
	    } else if(foto.jenis == "selfie") {
	    	hasil[i] = foto.jumlah;
	    }
    }

    cout << endl;

    for(int i=0; i<t; i++) {
    	cout << hasil[i] << endl;
    }

    keluar:
    return 0;
}
