#include "vector.h"
#include <math.h>

namespace upe {
	vector vector::operator= (const vector v) {
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
		return v;
	}
	
	vector vector::operator+ (const vector v) {
		vector r(this->x+v.x, this->y+v.y, this->z+v.z);
		return r;
	}
	
	void vector::operator+= (const vector v) {
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
	}
	
	vector vector::operator- (const vector v) {
		vector r(this->x-v.x, this->y-v.y, this->z-v.z);
		return r;
	}
	
	void vector::operator-= (const vector v) {
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
	}
	
	real vector::operator* (const vector v) {
		return (this->x*v.x) + (this->y*v.y) + (this->z*v.z);
	}
	
	vector vector::operator* (const real r) {
		vector res(this->x*r, this->y*r, this->z*r);
		return res;
	}
	
	void vector::operator*= (const real r) {
		this->x *= r;
		this->y *= r;
		this->z *= r;
	}
	
	real vector::getNorm(void) {
		real res = getNormSquared();
		return sqrt((double)res);
	} 
	
	real vector::getNormSquared(void) {
		return pow((double)this->x, 2) +  pow((double)this->y, 2) + pow((double)this->z, 2);
	}
	
	void vector::Normalize(void) {
		real res = getNorm();
		this->x/=res;
		this->y/=res;
		this->z/=res;
	}
	
	real vector::getCosine(vector v) {
		return (*this * v) / (this->getNorm()*v.getNorm());
	}
	
	bool isRightAngled(vector v) {
		real a = getCosine(v);
		return a==0?true:false;
	}
}
