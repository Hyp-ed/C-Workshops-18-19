#include <iostream>

using namespace std;

int main() {
  int input;
  cout << "Enter score (between 0 and 100):\n";
  cin >> input;

  if (input < 0 || input > 100) {
    cout << "Error! Mark was not valid\n";
  } else if (input == 100) {
    cout << "Perfect score!\n";
  } else if (input >= 90) {
    cout << "Grade: A\n";
  } else if (input >= 80) {
    cout << "Grade: B\n";
  } else if (input >= 70) {
    cout << "Grade: C\n";
  } else if (input >= 60) {
    cout << "Grade: D\n";
  } else {
    cout << "Grade: F\n";
  }

  return 0;
}
