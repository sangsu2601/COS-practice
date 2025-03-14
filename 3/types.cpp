#include <iostream>
using namespace std;
int main()
{
	short svar;
	int i, ivar;
	unsigned int unvar;

	svar = 20000;
	ivar = 20000;
	uvar = 20000;

	for (i=0; i<7; i++){
		cout << "svar: " << svar << " ivar: " << ivar << " uvar: " << uvar << endl;
		svar = -20000;
		ivar = -20000;
		uvar = -20000;
	}
	return 0;
}

