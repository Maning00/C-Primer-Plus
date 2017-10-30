#include <iostream>
#include <string>
using namespace std;
int main()
{
cout << "What's your first name?";
string a;
getline(cin , a);
cout << "What's your last name?";
string b;
getline(cin, b);
cout << "What letter grade do you deserve?";
char c;
cin >> c;
cout << "What's your age?";
int d;
cin >> d;
cout << "Name: " << b << "," << a << endl;
cout << "Grade: " << c << endl;
cout << "Age " << d;
system("pause");
return 0;
}