#ifndef VEC_H
#define VEC_H

#define MAX 100

using namespace std;

class Vec{
	friend ostream &operator<<(ostream& output, const Vec& in);
public:
	Vec(int x, int y);
	Vec& assign(Vec& in);
	friend Vec operator+(Vec& v1, Vec& v2);
	friend Vec operator-(Vec& v1, Vec& v2);
	friend int operator*(Vec& v1, Vec& v2);
	friend Vec operator*(Vec& v, int n);
    int InnerProduct(Vec &inner);
	void print();
private:
	int _x;
	int _y;
};
#endif