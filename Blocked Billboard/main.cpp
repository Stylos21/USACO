#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

class Rect
{
public:
    // int x_bleft, y_bleft, x_tleft, y_tleft, x_bright, y_bright, x_tright, y_tright;
    int x_bleft, y_bleft, x_tright, y_tright;

    int getArea()
    {
        return ((x_tright - x_bleft) * (y_tright - y_bleft));
    }

    // int area () {
    //     return ();
    // }
};

class Truck : public Rect
{
public:
    int checkIfPointsIntersect(Rect rect)
    {
        int area = rect.getArea();
        int truckArea = this->getArea();
        int areaOfIntersection;
        // cout << (rect.x_bleft < (this->x_tright) && this->x_tright < rect.y_tright) && (rect.y_bleft < this->y_tright && this->y_tright < rect.y_tright);
        if ((rect.x_bleft < (this->x_bleft) && this->x_bleft < rect.y_tright) && (rect.y_bleft < this->y_tright && this->y_tright < rect.y_tright))
        {
            areaOfIntersection = (rect.x_tright - this->x_bleft) * (this->y_tright - rect.y_bleft);
        }
        else if ((rect.x_bleft < (this->x_tright) && this->x_tright < rect.x_tright) && (rect.y_bleft < this->y_tright && this->y_tright < rect.y_tright))
        {   
            cout << (this->x_tright - rect.x_bleft) << endl;
            cout << (this->y_tright - rect.y_bleft) << endl;

            areaOfIntersection = (this->x_tright - rect.x_bleft) * (this->y_tright - rect.y_bleft);
            cout << areaOfIntersection << endl;
        }

        return areaOfIntersection;
    }
};

int main()
{
    Rect bboard1, bboard2;
    Truck truck;
    cin >> bboard1.x_bleft >> bboard1.y_bleft >> bboard1.x_tright >> bboard1.y_tright;
    cin >> bboard2.x_bleft >> bboard2.y_bleft >> bboard2.x_tright >> bboard2.y_tright;
    cin >> truck.x_bleft >> truck.y_bleft >> truck.x_tright >> truck.y_tright;
    truck.checkIfPointsIntersect(bboard2);
    // cout << bboard1.getArea() << endl;
    // cout << bboard2.getArea() << endl;
    // cout << truck.checkIfPointsIntersect(bboard1) << endl;
    // cout << truck.checkIfPointsIntersect(bboard2) << endl;
    // cout << (bboard1.getArea() - truck.checkIfPointsIntersect(bboard1)) + (bboard2.getArea() - truck.checkIfPointsIntersect(bboard2));
}