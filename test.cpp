#include <iostream>

using namespace std;

int main() {

    // Image

    int image_width = 256;
    int image_height = 256;

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        // Note: continuous flushing can cause performance issues
        clog << "Scan lines remaining: " << (image_height - j) << flush;
        for (int i = 0; i < image_width; ++i) {
            //this is calculating the RGB values of the image
            double r = double(i) / (image_width - 1);
            double g = double(j) / (image_height - 1);
            double b = 0;

            /**
             * Color Conversion to Integer Values: The red, green, and blue components
             * are converted from a range of 0 to 1 to a
             * range of 0 to 255 (typical for RGB color values in digital images).
             * This is done by multiplying each component by 255.999 and then casting it to an integer.
             */

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << "\n";
        }
    }
}