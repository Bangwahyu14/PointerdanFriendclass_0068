#include <iostream>
using namespace std;

class mahasiswa
{
publick:
	int nim;
	void showNim()
	{
		cout << "No induk = " << nim << endl;
	}
};

int main()
{
	mahasiswa* mhs = new mahasiswa{ 1 };//pointer objeck mhs
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	return 0;
}