#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>
#include <vector>
#include <cstdlib> // For rand()

// Struct to represent a line
struct Line {
    int x1, y1, x2, y2;
    int thickness;
    Fl_Color color;
};

// Canvas class for drawing
class Canvas : public Fl_Widget {
private:
    std::vector<Line> lines; // Store all lines
    int lineThickness;
    Fl_Color currentColor;

public:
    Canvas(int X, int Y, int W, int H, const char* L = 0)
        : Fl_Widget(X, Y, W, H, L), lineThickness(1), currentColor(FL_BLACK) {}

    void draw() override {
        // Clear the canvas with a white background
        fl_color(FL_WHITE);
        fl_rectf(x(), y(), w(), h());

        // Draw all the stored lines
        for (const auto& line : lines) {
            fl_color(line.color);
            fl_line_style(FL_SOLID, line.thickness);
            fl_line(x() + line.x1, y() + line.y1, x() + line.x2, y() + line.y2);
        }

        fl_line_style(FL_SOLID, 1); // Reset line style
    }

    void addLine() {
        int x1 = rand() % w(); // Random x1 within canvas width
        int y1 = rand() % h(); // Random y1 within canvas height
        int x2 = rand() % w(); // Random x2 within canvas width
        int y2 = rand() % h(); // Random y2 within canvas height

        // Add the new line to the list of lines
        lines.push_back({x1, y1, x2, y2, lineThickness, currentColor});

        // Increment line thickness for variety
        lineThickness = (lineThickness % 5) + 1;
    }
};

// Button callback to add and draw a line on the canvas
void drawLineCallback(Fl_Widget*, void* data) {
    Canvas* canvas = static_cast<Canvas*>(data);
    canvas->addLine();
    canvas->redraw(); // Redraw the canvas to reflect the new line
}

int main() {
    Fl_Window* window = new Fl_Window(800, 600, "Persistent Line Drawer");

    // Create the canvas
    Canvas* canvas = new Canvas(50, 50, 700, 500);

    // Create the button
    Fl_Button* drawButton = new Fl_Button(350, 10, 100, 30, "Draw Line");
    drawButton->callback(drawLineCallback, canvas);

    window->end();
    window->show();

    return Fl::run();
}
