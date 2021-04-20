// classes-vtstanchev18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Point2D
{
public:
    // Parameterless constructor (ctor)
    Point2D()
    {
        cout << "Constructor1" << endl;
        x = 0;
        y = 0;
    }

    Point2D(float newX, float newY)
    {
        cout << "Constructor2: " <<newX<<", "<<newY<< endl;
        x = newX;
        y = newY;
    }

    ~Point2D()
    {
        cout << "Destructor: " << x << " , " << y << endl;
    }

    void toString()
    {
        cout << x << " , " << y<<endl;
    }

private:
    float x;
    float y;
};

int main()
{
    Point2D p1;
    Point2D* p2 = new Point2D();
    Point2D* p3 = new Point2D(4.6, 5.8);

    p1.toString();
    p2->toString();
    p3->toString();

    delete p2;
    delete p3;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
