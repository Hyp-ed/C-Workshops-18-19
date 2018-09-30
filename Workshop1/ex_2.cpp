#include <iostream>

using namespace std;

int main() {
  int input;
  
  for (int i = 0; i < 10; i++) {
    cout << "Enter any number other than 5:\n";
    cin >> input;
    if (input == 5) {
      cout << "Hey! You weren't supposed to enter 5!\n";
      return 0;
    }
  }
  cout << "Wow, you're more patient than I am, you win.\n";
  
  return 0;
}