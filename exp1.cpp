#include <iostream> 
using namespace std; 
#define N 5 
class Stack { 
 int stack[N]; 
 int top; 
public: 
 Stack() { 
 top = -1; 
 } 
 void push(int x) { 
 if (top == N - 1) { 
 cout << "Stack Overflow" << endl; 
 return; 
 } 
 stack[++top] = x; 
 } 
 void pop() { 
 if (top == -1) { 
 cout << "Stack Underflow" << endl; 
 return; 
 } 
 cout << "Popped element: " << stack[top--] << endl;  } 
 void display() { 
 if (top == -1) { 
 cout << "Stack is empty" << endl; 
 return; 
 } 
 cout << "Final Stack: "; 
 for (int i = top; i >= 0; i--) 
 cout << stack[i] << " "; 
 cout << endl;
 } 
}; 
int main() { 
 Stack s; 
 s.push(10); 
 s.push(20); 
 s.push(30); 
 s.push(40); 
 s.push(50); 
 s.push(60); 
 s.pop(); 
 s.pop(); 
 s.display(); 
 return 0; 
} 
