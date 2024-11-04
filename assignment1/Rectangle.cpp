// Arif Şevki Yılmaz
// 22050111043  

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(Pen p, int w, int h) : Shape(p), width(w), height(h) {}

void Rectangle::draw() {
    //get pen
    Pen pen = getPen();
    
    //draw rectangle
    pen.write(width);
    std::cout << std::endl;
    for (int i = 1; i < height - 1; ++i) {
        pen.write(1);
        pen.space(width - 2);
        pen.write(1);
        std::cout << std::endl;
    }   
    pen.write(width);
    std::cout << std::endl;
}