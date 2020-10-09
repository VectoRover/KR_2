#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

CVectRat CVectRat :: operator+(const CVectRat& b) {
	CVectRat m(size);
	for (int i = 0; i < size; i++) {
		m.arr[i] = arr[i] + b.arr[i];
	}
	return m;
};

CVectRat CVectRat :: operator-(const CVectRat& b) {
	CVectRat m(size);
	for (int i = 0; i < size; i++) {
		m.arr[i] = arr[i] - b.arr[i];
	}
	return m;
};

CRat CVectRat :: operator*(const CVectRat& b) {
	CVectRat m(size);
	CRat a;
	for (int i = 0; i < size; i++) {
		a = a + arr[i] * b.arr[i];
	}
	return a;
};

CVectRat& CVectRat :: operator=(const CVectRat& b) {
	for (int i = 0; i < size; i++) {
		arr[i] = b.arr[i];
	}
	return *this;
};

void CVectRat::print() {
	cout << "(";
	for (int i = 0; i < size - 1; i++) {
		arr[i].print();
		cout << " , ";
	}
	arr[size - 1].print();
	cout << ")\n";
};