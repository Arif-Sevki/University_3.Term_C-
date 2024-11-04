// Arif Şevki Yılmaz
// 22050111043

#include "Pen.h"
#include <iostream>
#include <cctype>
using namespace std;

//inkChar should be a lowercase letter between 'a' and 'z' else it will be 'a'
Pen::Pen(char inkChar){
    if(inkChar >= 'a' && inkChar <= 'z'){
        ink = inkChar;
    }
    else{
        ink = 'a';
    }
}

//print n times ink
void Pen::write(int n){
    for(int i=0; i<n; i++){
        cout<<ink;
    }
}

//print n times space
void Pen::space(int n){
    for(int i=0; i<n; i++){
        cout<<" ";
    }
}

//Converts `ink` to uppercase if `bold` is `true`, lowercase if `false`.
void Pen::setBold(bool bold){
    if(bold){
        ink = toupper(ink);
    }
    else{
        ink = tolower(ink);
    }
    
}

// Getter for ink
char Pen::getInk() const {
    return ink;
}


