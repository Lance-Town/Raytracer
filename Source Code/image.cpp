/* Lance Townsend
 * 2/22/23
 *
 * Definitions for the image rendering functions
*/

#include "image.h"

using namespace std;

extern const int imageWidth = 256;
extern const int imageHeigth = 256;

void outputP3Header() {
    // output the character set the image is in, then the size of the image, then the max value for the pizels
    cout << "P3\n" << imageWidth << ' ' << imageHeigth << "\n255\n";

    return;
}

void writeColor(ostream &out, color pixel) {
    out << int(pixel.getX() * 255.999) << ' ' << int(pixel.getY() * 255.999) << ' ' << int(pixel.getZ() * 255.999) << '\n';
    return;
}