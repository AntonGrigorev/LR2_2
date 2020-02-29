#include "Vector.h"

Vector::Vector() {
	n = 0;
	p = nullptr;
}

Vector::Vector(double* l, int j) {
	n = j;
	p = new double[j];
	for (int i = 0; i < j; i++) {
		p[i] = l[i];
	}
}

Vector::Vector(const Vector& V) {
	n = V.n;
	p = new double[n];
	for (int i = 0; i < n; i++) {
		p[i] = V.p[i];
	}
}

Vector::Vector(Vector&& V1) {
	p = V1.p;
	n = V1.n;
	V1.p = nullptr;
	V1.n = 0;
}

Vector& Vector:: operator =(Vector& v2) {
	n = v2.n;
	p = new double[n];
	for (int i = 0; i < n; i++) {
		p[i] = v2.p[i];
	}
	return *this;
}

double Vector:: operator [](int index) {
	return p[index];
}

Vector& Vector:: operator +(double* arr) {
	Vector* Res = new Vector();
	Res->n = n + n;
	Res->p = new double[Res->n];
	for (int i = 0; i < n; i++) {
		Res->p[i] = p[i];
	}
	for (int i = n; i < Res->n; i++) {
		Res->p[i] = arr[i - n];
	}
	return *Res;
}

Vector::~Vector() {
	if (p != nullptr) {
		delete[] p;
	}
}

ostream& operator << (ostream& out, Vector& v) {
	for (int i = 0; i < v.n; i++) {
		out << v.p[i] << " ";
	}
	return out;
}

istream& operator >> (istream& in, Vector& v) {
	cout << "Число элементов: ";
	in >> v.n;
	v.p = new double[v.n];
	for (int i = 0; i < v.n; i++) {
		v.p[i] = 2 * i;
	}
	return in;
}
