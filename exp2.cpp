#include <iostream> 
using namespace std; 
#define N 5 
class Queue { 
 int q[N]; 
 int front, rear; 
public: 
 Queue() { 
 front = -1; 
 rear = -1; 
 } 
 void enqueue(int x) { 
 if (rear == N - 1) { 
 cout << "Queue Overflow" << endl; 
 return; 
 } 
 if (front == -1) 
 front = 0; 
 q[++rear] = x; 
 } 
 void dequeue() { 
 if (front == -1) { 
 cout << "Queue Underflow" << endl; 
 return; 
 } 
 cout << "Deleted element: " << q[front] << endl;  if (front == rear) 
 front = rear = -1; 
 else 
front++; 
 }
 void display() { 
 if (front == -1) { 
 cout << "Queue is empty" << endl; 
 return; 
 } 
 cout << "Final Queue: "; 
 for (int i = front; i <= rear; i++) 
 cout << q[i] << " "; 
 cout << endl; 
 } 
}; 
int main() { 
 Queue q; 
q.enqueue(10); 
 q.enqueue(20); 
 q.enqueue(30); 
 q.enqueue(40); 
 q.enqueue(50); 
 q.enqueue(60); 
 q.dequeue(); 
 q.dequeue(); 
 q.display(); 
 return 0; 
} 
