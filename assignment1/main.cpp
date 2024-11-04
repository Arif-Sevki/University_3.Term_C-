// Arif Şevki Yılmaz
// 22050111043

#include <iostream>
#include "Pen.h"
#include "IncrementalPen.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
int main() {
// Test Pen and IncrementalPen
Pen p('c');
p.write(5); // Expected: "ccccc"
std::cout << std::endl;
p.setBold(true);
p.write(3); // Expected: "CCC"
std::cout << std::endl;
IncrementalPen ip('x');
ip.write(5); // Expected: "xyzab" (wraps around)
std::cout << std::endl;
// Test Rectangle, Circle, Square with Pen
Rectangle rect(p, 5, 3);
rect.draw(); // Expected: Rectangle shape
Circle circ(p, 3);
circ.draw(); // Expected: Circle shape
Square sq(ip, 4);
sq.draw(); // Expected: Square shape, with incremental pen
return 0;
}
