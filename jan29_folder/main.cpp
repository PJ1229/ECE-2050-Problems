#include <iostream>
#include <queue>
#include <string>
using namespace std;

void generateStrings(int n);

int main() {
  int n = 2;
  generateStrings(n);
}

/*
Start with the empty string in the queue // done
While there are strings in the queue, do: // done
  Print the front one // done
  Dequeue it // done
  If it has not reached the maximum length n // done
    For each possible next char c // done
    Form a new string by adding c and enqueue it // done
*/

void generateStrings(int n) {
 // your code here....
 queue<string> q;
 q.push("");
 while(!q.empty()){
  string current = q.front();
  q.pop();
  cout << current << endl;
  if(current.length() < n){
   q.push(current + "0");
   q.push(current + "1");
  }
 }
}

