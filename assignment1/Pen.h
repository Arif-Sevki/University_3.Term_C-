// Arif Şevki Yılmaz
// 22050111043

#ifndef PEN_H
#define PEN_H

class Pen{

    //attribute is private
    private:
     
      char ink;


    //methods are public
    public:

        Pen(char inkChar = 'a');
        void write(int n);
        void space(int n);
        void setBold(bool bold);

        // Getter for ink
        char getInk() const;
        
};

#endif