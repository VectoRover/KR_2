#include "header.h"

CVectRat input(int size) {
	CVectRat m(size);
	int num;
	unsigned den;
	for (int i = 0; i < size; i++) {
		cout << "Vvedite " << i + 1 << "-yu koordinatu (chisl i znamen)\t";
		cin >> num;
		cin >> den;
		CRat a(num, den);
		m.Set_arr(i, a);
	}
	cout << "Vy vveli vector\t\n\n";
	m.print();
	cout << endl;
	return m;
};