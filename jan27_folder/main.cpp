#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isLeftParenthesis(char c);  // determine wheter c is any left parenthesis
bool isRightParenthesis(char c); // determine wheter c is any right parenthesis
bool isMatched(char l, char r);  // determine wheter l and r are matched
bool isBalancedParenthesis(string s);

int main() {
  string str1 = "int foo() { if (x * (y + z[1]) < 137) { x = 1; } }"; // 1
  string str2 = "[([}";                                               // 0
  string str3 = "}}}";                                                // 0
  string str4 = "{}[[]";                                              // 0
  string str5 = "{}[]()";                                             // 1
  string str6 = "{{[";                                                // 0
  string str7 = "";                                                   // 1
  string str8 = "[{(x+1)}";                                           // 0
  cout << isBalancedParenthesis(str1) << endl;
  cout << isBalancedParenthesis(str2) << endl;
  cout << isBalancedParenthesis(str3) << endl;
  cout << isBalancedParenthesis(str4) << endl;
  cout << isBalancedParenthesis(str5) << endl;
  cout << isBalancedParenthesis(str6) << endl;
  cout << isBalancedParenthesis(str7) << endl;
  cout << isBalancedParenthesis(str8) << endl;
}

bool isBalancedParenthesis(string s) {
  stack<char> myStack;
  for(int i=0; i<s.size(); i++){
    if(isLeftParenthesis(s[i])){
      myStack.push(s[i]);
    }
    if(isRightParenthesis(s[i])){
      if(myStack.empty()){
        return 0;
      }
      if(isMatched(myStack.top(), s[i])){
        myStack.pop();
      }
    }
  }
  return myStack.empty();
}

bool isLeftParenthesis(char c) {
  return (c == '(') || (c == '{') || (c == '[');
}

bool isRightParenthesis(char c) {
  return (c == ')') || (c == '}') || (c == ']');
}

bool isMatched(char l, char r) {
  return (l == '(' && r == ')') || (l == '{' && r == '}') ||
         (l == '[' && r == ']');
}

