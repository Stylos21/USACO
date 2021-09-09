#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;
// ifstream input("./paint_bronze_dec15/1.in");

int main()
{
    
    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    if(c < b && d > a){
        cout << abs(max(b, d) - min(a, c));
    } else {
        cout << abs(b - a) + abs(d - c);
    }


}