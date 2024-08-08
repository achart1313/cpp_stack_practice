#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int x = 0;
    string str;
    cout << "enter a number\n";
    getline(cin, str);
    if(isdigit(str.front())){
        stringstream(str) >> x;
        cout << "number + 1 is: " << x + 1 << "\n";
    }else{
        cout << "that is nan\n";
    }
    return 0;
}