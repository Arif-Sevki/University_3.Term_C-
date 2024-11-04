// Arif Şevki Yılmaz
// 22050111043

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape{
    //attributes
    private:
        int radius;

    //methods
    public:
    Circle(Pen p, int r);
    void draw() override;
    

};
#endif