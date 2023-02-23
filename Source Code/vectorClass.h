/* Lance Townsend
 * 2/22/23
 * Holds vector class header
*/

#ifndef VECTOR_CLASS_H
#define VECTOR_CLASS_H

#include <math.h>

const int POSITION_ARRAY_SIZE = 3;

class Vec {
    public:
        // constructors
        Vec();
        Vec(double, double, double);

        // get x, y, and z
        double getX() {return position[0];}
        double getY() {return position[1];}
        double getZ() {return position[2];}

        // operations
        double operator[](int i) { return position[i]; }
        Vec& operator+=(Vec&);
        Vec& operator*=(Vec&);
        Vec& operator*=(const double);
        Vec& operator/=(Vec&);
        Vec& operator/=(const double t) { return *this *= 1/t; }

        // length of vector
        double length_squared() { return position[0]*position[0] + position[1]*position[1] + position[2]*position[2]; }
        double length() { return sqrt(length_squared()); }

        // print values in vector
        void print();

        // update the x, y, and z
        void updateValues(double, double, double);
    public:
        double position[POSITION_ARRAY_SIZE];
        
};

// vector is used as both color (RGB) and points (XYZ)
typedef Vec color;
typedef Vec point;

#endif