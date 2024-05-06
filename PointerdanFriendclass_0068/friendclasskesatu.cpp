#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
	string nama;

publick:
	void setNama(string pNama);
	friend class siswa;
};

class siswa
{
private:
	int id;
publick:
	void setId(int pid);
	void displayALL(orang &a);
};