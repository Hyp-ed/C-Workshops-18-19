#include <iostream>

using namespace std;

string modify(string name);
string reverseName(string name);

string modify(string name) {
  int i = 0;
  while (i < name.length()) {
    char c = name.at(i);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      name.replace(i,1,"z");
    }
    i++;
  }
  return name;
}

string reverseName(string name) {
  int n = name.length();
  for (int i = 0; i < n/2; i++) {
    swap(name[i], name[n - i - 1]);
  }
  return name;
}

int main() {
  string forename;
  string surname;
  string fullname;

  cout << "Enter first name:" << endl;
  cin >> forename;
  cout << "Enter last name:" << endl;
  cin >> surname;

  fullname = forename + " " + surname;
  cout << "Fullname: " << fullname << endl;

  cout << "Modify: " << modify(fullname) << endl;
  cout << "Reverse: " << reverseName(fullname) << endl;
}