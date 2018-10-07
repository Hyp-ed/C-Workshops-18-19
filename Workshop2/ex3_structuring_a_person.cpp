#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main()
{
    Person p;

    // Set struct details
    cout << "Please input you name: " << endl;
    cin >> p.name;

    cout << "Please input you age: " << endl;
    cin >> p.age;

    cout << "Please input you height: " << endl;
    cin >> p.height;

    // output struct details
    cout << "name: " << p.name << endl;
    cout << "age: " << p.age << endl;
    cout << "height: " << p.height << endl;

    return 0;
}