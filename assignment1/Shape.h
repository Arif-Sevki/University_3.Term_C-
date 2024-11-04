// Arif Şevki Yılmaz
// 22050111043

#ifndef SHAPE_H
#define SHAPE_H

#include "Pen.h"

class Shape {
private:
    Pen pen; // Contains a `Pen` object.

public:
    // Constructor to initialize the Pen
    Shape(Pen p); 

    // Abstract draw method
    virtual void draw() = 0;

    // Getter for pen 
    const Pen& getPen() const;
};

#endif 