#include <iostream>
using namespace std;
int main()
{
    cout <<"please enter your height:___\b\b\b";
    int h;
    cin >> h; //height
    const int chg = 12;
    cout << "your height is" << h/chg << "ft," << h%12 << "inch" << endl;
	system("pause");
    return 0;
}