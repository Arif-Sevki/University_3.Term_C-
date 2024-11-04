// Arif Şevki Yılmaz
// 22050111043

#include "Shape.h"

// Constructor initializes the pen
Shape::Shape(Pen p) : pen(p) {}

const Pen& Shape::getPen() const {
    return pen;
}
