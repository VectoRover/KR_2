#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

void raschet(void) {
	int size;
	cout << "Vvedite dlinu vectora" << endl;
	cin >> size;

	CVectRat vect1(size);
	CVectRat vect2(size);
	CVectRat vect3(size);
	CRat m;

	vect1 = input(size);
	vect2 = input(size);

	cout << "________________________________________" << endl;
	cout << "\n";
	vect3 = vect1 + vect2;
	vect3.print();
	cout << "\n";
	vect3 = vect1 - vect2;
	vect3.print();
	cout << "\n";
	m = vect1 * vect2;
	m.print();
	cout << "\n";
	cout << "________________________________________" << endl;
	cout << "\n";
};