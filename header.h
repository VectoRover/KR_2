#pragma once
#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
#include <math.h>
using namespace std;


class CRat {

private:
	int num;
	unsigned den;
public:
	CRat() {
		this->num = 0;
		this->den = 1;
	};
	CRat(int num, unsigned den) {
		this->num = num;
		this->den = den;
	};
	int GetNum() const{
		return num;
	};
	unsigned GetDen() const {
		return den;
	};
	CRat operator+(const CRat& b);
	CRat operator-(const CRat& b);
	CRat operator*(const CRat& b);
	CRat& operator=(const CRat& b);
	void print();

};

class CVectRat {
private: 
	CRat* arr;
	int size;
public:
	CVectRat(int size) {
		arr = new CRat[size];
		for (int i = 0; i < size; i++) {
			CRat m;
			arr[i] = m;
		}
		this->size = size;
	};
	~CVectRat() {
		arr = NULL;
		size = 0;
	};
	void Set_arr(int i, CRat m) {
		this->arr[i] = m;
	};

	CVectRat operator+(const CVectRat& b);
	CVectRat operator-(const CVectRat& b);
	CRat operator*(const CVectRat& b);
	CVectRat& operator=(const CVectRat& b);
	void print();
};

CVectRat input(int size);
void raschet(void);
void autotest(void);
