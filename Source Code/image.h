/* Lance Townsend
 * 2/22/23
 *
 * Holds the image rendering header functions
*/

#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>
#include "vectorClass.h"

using namespace std;

// output the P3 file type header that is manidtory
void outputP3Header();

// output the pixel values
void writeColor(ostream &out, color pixel);

#endif