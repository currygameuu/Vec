#include <iostream>
#include "Vec.h"

using namespace std;

ostream &operator<<(ostream& output, const Vec& in){
    output << '(' << in._x <<", "<<in._y<<')';
    return output;
}

Vec::Vec(int x, int y){
	_x = x;                    //----initialize----//
    _y = y;                                   
}



Vec& Vec::assign(Vec& assign){
	_x = assign._x;
    _y = assign._y;
	return *this;
}
Vec operator+(Vec &v1, Vec&v2){
    return Vec(v1._x+v2._x, v1._y+v2._y);
}
Vec operator-(Vec& v1, Vec& v2){
    return Vec(v1._x-v2._x, v1._y-v2._y);
}
int operator*(Vec& v1, Vec& v2){
    return v1._x*v2._x+v1._y*v2._y;
}
Vec operator*(Vec& v, const int n){
    return Vec(v._x*n, v._y*n);
}

int Vec::InnerProduct(Vec &inner){
    int result = _x*inner._x+_y*inner._y;
    return result;
}

void Vec::print(){
	printf("(%d, %d)",_x, _y);
    cout<<endl;
}

int main(){
    Vec v1(1,2), v2(4,6);
    cout << "v1:" << v1 << " v2:" << v2 << endl;
    Vec v3 = v1+v2; // (5, 8)
    cout << "v3:" << v3 << endl;
    Vec v4 = v1-v2;//(-3, -4)
    cout << "v4:" << v4 << endl;
    int inner = v3*v4; // -47
    cout <<"v3, v4 inner product = "<< inner << endl;
    Vec v5 = v3*5;//(25, 40)
    cout << "v5:" << v5 << endl;
}