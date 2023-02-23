/* Lance Townsend
 * 2/22/23
 * Holds vector class methods
*/

#include <iostream>
#include "vectorClass.h"

using namespace std;

/* Vec class methods */

// base construction of all points 0
Vec::Vec() {
    position[0] = 0;
    position[1] = 0;
    position[2] = 0;
    return;
}

// construct with given XYZ (or RGB)
Vec::Vec(double x, double y, double z) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
    return;
}

// print XYZ values
void Vec::print() {
    cout << position[0] << ' ' << position[1] << ' ' << position[2] << '\n';
    return;
}

/* --------------- Operations to perform on vector --------------- */
Vec& Vec::operator+=(Vec& v) {
    position[0] += v.position[0];
    position[1] += v.position[1];
    position[2] += v.position[2];

    return *this;
}

Vec& Vec::operator*=(Vec& v) {
    position[0] *= v.position[0];
    position[1] *= v.position[1];
    position[2] *= v.position[2];

    return *this;
}

Vec& Vec::operator*=(const double n) {
    position[0] *= n;
    position[1] *= n;
    position[2] *= n;

    return *this;
}

Vec& Vec::operator/=(Vec& v) {
    position[0] /= v.position[0];
    position[1] /= v.position[1];
    position[2] /= v.position[2];

    return *this;
}

void Vec::updateValues(double x, double y, double z) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
    return;
}

/* ----------------------- inline operation functions of Vec class ----------------------- */ 

inline Vec operator*(const Vec &u, const Vec &v) {
    return Vec(u.position[0] * v.position[0], u.position[1] * v.position[1], u.position[2] * v.position[2]);
}

inline ostream& operator<<(ostream &out, const Vec &v) {
    return (out << v.position[0] << ' ' << v.position[1] << ' ' << v.position[2]);
}

inline Vec operator+(const Vec &u, const Vec &v) {
    return Vec(u.position[0] + v.position[0], u.position[1] + v.position[1], u.position[2] + v.position[2]);
}

inline Vec operator-(const Vec &u, const Vec &v) {
    return Vec(u.position[0] - v.position[0], u.position[1] - v.position[1], u.position[2] - v.position[2]);
}


inline Vec operator*(double t, const Vec &v) {
    return Vec(t*v.position[0], t*v.position[1], t*v.position[2]);
}

inline Vec operator*(const Vec &v, double t) {
    return t * v;
}

inline Vec operator/(Vec v, double t) {
    return (1/t) * v;
}