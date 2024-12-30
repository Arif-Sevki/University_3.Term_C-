#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Window.H>
#include <vector> 

//              Pen Class 
class Pen {
private:
    Fl_Color color;
    bool isBold;

public:
    Pen(Fl_Color c) : color(c), isBold(false) {}

    void setBold(bool bold) {
        isBold = bold;
    }

    Fl_Color getColor() const {
        return color;
    }

    virtual void drawLine(int x1, int y1, int x2, int y2) { 
        fl_color(color);
        if (isBold) {
            fl_line_style(FL_SOLID, 3); 
        } else {
            fl_line_style(FL_SOLID, 1); 
        }
        fl_line(x1, y1, x2, y2);
        fl_line_style(FL_SOLID, 1); 
    }

    virtual ~Pen() = default; 
};

//                  ColorfulPen Class
class ColorfulPen : public Pen {
private:
    Fl_Color currentColor;

public:
    ColorfulPen() : Pen(FL_RED), currentColor(FL_RED) {}

    void drawLine(int x1, int y1, int x2, int y2) override { 
        Pen::drawLine(x1, y1, x2, y2);

        if (currentColor == FL_RED) {
            currentColor = FL_GREEN;
        } else if (currentColor == FL_GREEN) {
            currentColor = FL_BLUE;
        } else {
            currentColor = FL_RED;
        }
    }
};


//                   Shape Class
class Shape {
protected:
    Pen pen;

public:
    Shape(Fl_Color c) : pen(c) {}

    virtual void draw() = 0; 
};

//                   Line Class
class Line : public Shape {
private:
    int x1, y1, x2, y2;

public:
    Line(int x1, int y1, int x2, int y2, Fl_Color c) 
        : Shape(c), x1(x1), y1(y1), x2(x2), y2(y2) {}

    void draw() override {
        pen.drawLine(x1, y1, x2, y2);
    }
};

//                       Rectangle Class
class Rectangle : public Shape {
private:
    int x, y, width, height;

public:
    Rectangle(int x, int y, int width, int height, Fl_Color c) 
        : Shape(c), x(x), y(y), width(width), height(height) {}

    void draw() override {
        pen.drawLine(x, y, x + width, y);          
        pen.drawLine(x + width, y, x + width, y + height); 
        pen.drawLine(x + width, y + height, x, y + height); 
        pen.drawLine(x, y + height, x, y);       
    }
};

//                   Circle Class
class Circle : public Shape {
private:
    int cx, cy, radius;

public:
    Circle(int cx, int cy, int radius, Fl_Color c) 
        : Shape(c), cx(cx), cy(cy), radius(radius) {}

    void draw() override {
        fl_color(pen.getColor());
        fl_arc(cx - radius, cy - radius, radius * 2, radius * 2, 0, 360);
    }
};

//                          Canvas Class
class Canvas : public Fl_Widget {
private:
    std::vector<Shape*> shapes;

public:
    Canvas(int X, int Y, int W, int H, const char* L = 0)
        : Fl_Widget(X, Y, W, H, L) {}

    void addShape(Shape* shape) {
        shapes.push_back(shape);
        redraw(); 
    }

    void draw() override {
       
        fl_color(FL_WHITE);
        fl_rectf(x(), y(), w(), h());

       
        for (auto shape : shapes) {
            shape->draw();
        }
    }
};
//                      Main
int main() {
    Fl_Window* window = new Fl_Window(800, 600, "Shape Drawer");

    
    Canvas* canvas = new Canvas(50, 50, 700, 500);

   
    Line* line = new Line(100, 100, 200, 200, FL_BLUE);
    Rectangle* rect = new Rectangle(300, 150, 100, 50, FL_GREEN);
    Circle* circle = new Circle(500, 300, 50, FL_RED);

    canvas->addShape(line);
    canvas->addShape(rect);
    canvas->addShape(circle);

    window->end();
    window->show();

    return Fl::run();
}
