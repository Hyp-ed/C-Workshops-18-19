#include <iostream>

using namespace std;

void sayHello(int n);
int product(int x, int y);
void half(int n);

void sayHello(int n) {
  int i = 0;
  while(i < n) {
    cout << "Hello\n";
    i++;
  }
}

int product(int x, int y) {
  return x*y;
}

void half(int n) {
  cout << n << endl;
  n = n/2;
  if (n > 0) {
    half(n);
  } else {
    return;
  }
}

int main() {
  // Test sayHello()
  sayHello(0);
  sayHello(5);
  sayHello(-1);
  
  // Test product()
  cout << product(4,5) << endl;
  cout << product(0,0) << endl;
  cout << product(-1,10) << endl;
  cout << product(-4,-5) << endl;

  // Test half()
  half(200);
  half(0);
  half(-10);
}