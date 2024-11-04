// Arif Şevki Yılmaz
// 22050111043

#ifndef INCREMENTALPEN_H
#define INCREMENTALPEN_H

#include "Pen.h"

class IncrementalPen : public Pen {// Inherit from Pen
public:
    IncrementalPen(char inkChar = 'a');
    void write(int n) ;
}; 

#endif