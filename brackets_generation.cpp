#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

void open(string result, int c_open, int c_close);
void close(string result, int c_open, int c_close);

int n;
int main(){ 
string result = "(";
int c_open= 1;
int c_close = 0;
cin >> n;

open(result, c_open, c_close);
close(result, c_open, c_close);

return 0;
}

void open(string result, int c_open, int c_close){
    result += "(";
    c_open++;
    if((c_open != c_close) || (c_open < n)) {
        if(c_open < n) open(result, c_open, c_close);
        if(c_close < c_open) close(result, c_open, c_close);
    }

    if((c_open == c_close) &&(c_open == n))
    cout << result << endl;
  
}

void close(string result, int c_open, int c_close){
    result += ")";
    c_close++;
    if((c_open != c_close) || (c_open < n)) {
        if(c_open < n) open(result, c_open, c_close);
        if(c_close < c_open) close(result, c_open, c_close);
    }
    
    if((c_open == c_close) &&(c_open == n))
    cout << result << endl;
   
}
