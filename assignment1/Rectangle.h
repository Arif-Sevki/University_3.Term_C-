// Arif Şevki Yılmaz
// 22050111043

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
    //attributes
    private:
        int width;
        int height;

    //methods
    public:
        
        Rectangle(Pen p, int w, int h);
        void draw() override;
};
#endif