#include "Spool.h"
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Liste des taches" << endl;
	Job J0(1, "text.txt", true);
	//Job J1 = Job();
	cout << J0.viewJobInformations() << endl;
	//cout << J1.viewJobInformations() << endl;
	return 0;
}