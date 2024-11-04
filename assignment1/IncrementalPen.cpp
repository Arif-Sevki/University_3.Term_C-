// Arif Şevki Yılmaz
// 22050111043


#include "IncrementalPen.h"
#include <iostream>
#include <cctype>
using namespace std;

//take it from parent class
IncrementalPen::IncrementalPen(char inkChar) : Pen(inkChar){}

//  After each character print, increment `ink` to the next letter. If `ink` reaches `'z'`, it wraps around to `'a'`
void IncrementalPen::write(int n){
    char ink = getInk();
    for(int i=0; i<n; i++){
        cout<<ink;
        if (ink == 'z'){
            ink = 'a';
        }
        else{
            ink++;
        }
        
    }
}