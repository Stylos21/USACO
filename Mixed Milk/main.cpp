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
    int cartons[3] = {3, 4, 5};
    int max[3] = {10, 11, 12};
    // cin >> max[0] >> max[1] >> max[2];
    // cin >> cartons[0] >> cartons[1] >> cartons[2];

    int newCartons[100];
    for (int i = 0; i < 100; i++)
    {
        int carton = i % 3;
        if (carton < 2)
        {
            while (cartons[carton] > 0 && cartons[carton + 1] < max[carton + 1])
            {
                cartons[carton + 1] += 1;
                cartons[carton] -= 1;
            }
        }
        else
        {
            while (cartons[carton] > 0 && cartons[carton - 2] < max[carton - 2])
            {
                cartons[carton - 2] += 1;
                cartons[carton] -= 1;
            }
        }
    }
    cout << cartons[0] << " " << cartons[1] << " " << cartons[2] << endl;
}