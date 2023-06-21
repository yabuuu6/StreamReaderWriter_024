#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat Belajar di prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (....) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "default Pengecualian diexsekusi" << endl;
	}

	return 0;
}