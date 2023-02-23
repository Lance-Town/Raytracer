/* Lance Townsend
 * 2/22/23
 * 
 * main code for raytracer
*/

#include <iostream>
#include "vectorClass.h"
#include "image.h"

using namespace std;

// image dimensions
const int imageWidth = 256;
const int imageHeigth = 256;


int main() {
    outputP3Header();
    color pix;

    for (int h = 0; h < imageHeigth; h++) {
        for (int w = 0; w < imageWidth; w++) {
            pix.updateValues(double(h)/imageHeigth, double(w)/imageWidth, 0.3);
            writeColor(cout, pix);
        }
    }
    return 0;
}