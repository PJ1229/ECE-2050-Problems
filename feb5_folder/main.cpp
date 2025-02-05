#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;

/*
This code is used to generate all posible strings 
of length "n" using the characters "A" and "B"
*/

void generateStringsStack(int n);

int main() {
  int n = 10;
  generateStringsStack(n);
}

void generateStringsStack(int n) {
 stack<string> S; //create a stack
 S.push(""); //add empty string
 while(!S.empty()) { //repeat while stack is empty
  string temp = S.top(); //set output to top of stack
  S.pop(); //pop top of stack
  if(temp.length() < n){ //if length of temp is less than "n"
    S.push(temp + "B"); //add "B" to top of stack
    S.push(temp + "A"); //add "A" to top of stack
  }
  cout << temp << endl; //output temp
 }
}
