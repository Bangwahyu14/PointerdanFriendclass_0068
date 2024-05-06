#include <iostream>
using namespace std;

class mahasiswa
{
private:
	string nama;

publick:
	friend void setNama(mahasiswa &a, string);
};

void set nama(mahasiswa &a, string pNama);
{
	a.Nama = pNama;
}
