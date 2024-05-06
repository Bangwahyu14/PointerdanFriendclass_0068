#include <iostream>
using namespace

class mahasiswa {
publick:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 }; // objeck mhs
	mhs.showNim(); // Member Access Operator

	mahasiswa& refMhs = mhs; // pointer reference refMhs
	refMhf.nim = 2; // Member Access Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer Deference pMhs
	pMhs->nim = 3; //Arrow Operator
	pMhs->showNim();
	return 0;
}