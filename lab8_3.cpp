#include <iostream>
#include <string>
using namespace std;
char before(char x){
    if(x == 'A'){
        return  'Z' ;
    }
    
    if('A'<x and x<='Z'){
        return x-1;
    }
    else if('a'<x and x<'z'){
        return '0';
    }
    else{ 
        return '0' ;
    }
}