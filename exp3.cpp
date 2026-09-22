#include <iostream> 
using namespace std; 
int factorial(int n) { 
 if (n == 0 || n == 1) 
 return 1; 
 return n * factorial(n - 1); 
} 
int main() { 
 int N; 
 cout << "Enter N: "; 
 cin >> N; 
 if (N < 0) 
 cout << "Factorial is not defined for negative numbers."; 
 else 
 cout << "Factorial of " << N << " = " << factorial(N);  return 0; 
} 

