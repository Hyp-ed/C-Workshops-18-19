#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int p1, p2, p3, p4, p5;
  cout << "Enter number of pancakes eaten by 5 people ";
  cin >> p1 >> p2 >> p3 >> p4 >> p5;
  vector<vector<int>> pancakes = {{p1,1}, {p2,2}, {p3,3}, {p4,4}, {p5,5}};

  // Sort the 2D array by the first dimension (i.e. the number of pancakes)
  sort(pancakes.begin(), pancakes.end());
 
  // Print those who ate the most and least pancakes
  cout << "Person " << pancakes[4][1] << " ate the most pancakes: " << pancakes[4][0] << endl;
  cout << "Person " << pancakes[0][1] << " ate the least pancakes: " << pancakes[0][0] << endl;

  // Print each person with their number of pancakes eaten in descending order
  for (int i = pancakes.size()-1; i > -1; i--) {
    cout << "Person " << pancakes[i][1] << ": ate " << pancakes[i][0] << " pancakes\n";
  }
}