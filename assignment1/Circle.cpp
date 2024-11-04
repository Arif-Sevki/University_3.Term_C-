// Arif Şevki Yılmaz
// 22050111043

#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(Pen p, int r) : Shape(p), radius(r) {}


void Circle::draw() {

    //get pen
    Pen pen = getPen();
    
    //draw circle
    int diameter = 2 * radius + 1;
    for (int y = 0; y < diameter; ++y) {
        for (int x = 0; x < diameter; ++x) {
            int x1 = x - radius;
            int y1 = y - radius;
            if (std::round(std::sqrt(x1 * x1 + y1 * y1)) == radius) {
                pen.write(1);
            } else {
                pen.space(1);
            }
        }
        std::cout << std::endl;
    }
}

