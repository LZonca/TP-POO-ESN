#include "Spool.h"
#include <iostream>

using namespace std;

int main(void)
{
	cout << "Liste des taches" << endl;
	Job J0;
	Job J1(0, "", false);
	Job J2(112, "text.txt", true);
	Job J3(113, "cool.foo", true);
	Job J4(114, "hello.world", false);
	Job J5(115, "text.pad", false);
	Job J6(116, "Dart.pad", true);

	Spool S1(0,0,0);

	S1.listInsert(J0);
	S1.listInsert(J1);
	S1.listInsert(J2);
	S1.listInsert(J3);
	S1.listInsert(J4);
	S1.listInsert(J6);

	S1.viewSpoolInformations();
	cout << "Spool's Jobs: " << endl << S1.getViewList();
	return 0;
}