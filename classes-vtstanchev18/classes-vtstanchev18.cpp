// classes-vtstanchev18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Point2D
{
public:
    //const float offset = 15.0;

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

    // Copy constructor
    Point2D(const Point2D& p)
    {
        cout << "Copy constructor" << endl;
        x = p.x;
        y = p.y;
    }

    ~Point2D()
    {
        cout << "Destructor: " << x << " , " << y << endl;
    }

    void toString()
    {
        cout << x << " , " << y<<endl;
    }

    // Predefined operator +
    Point2D operator+(Point2D& otherPoint) {
        this->x += otherPoint.x;
        this->y += otherPoint.y;
        
        return *this;
    }

    __declspec(property(put = setX, get = getX)) float x1;

    void setX(float newValue)
    {
        cout << "setX" << endl;
        if (newValue < -200)
        {
            throw "Invalid X cordinate";
        }
        x = newValue;
    }

    float getX()
    {
        return x;
    }

    void setY(float newValue)
    {
        cout << "setY" << endl;
        if (newValue < -200)
        {
            throw "Invalid Y cordinate";
        }
        y = newValue;
    }

    float getY()
    {
        return y;
    }

private:
    float x;
    float y;
};

void dump(Point2D p)
{
    p.toString();
}

int main()
{
    Point2D pp1(3, 4);
    Point2D pp2(5, 6);
    Point2D pp3;
    Point2D* p2 = new Point2D();
    Point2D* p3 = new Point2D(4.6, 5.8);


    pp1.setX(15);
    pp1.setY(35);

    pp1.toString();
    try
    {
        pp1.x1 = -600;
        cout << pp1.x1 << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
    
    //dump(pp1);

    //pp3 = pp1 + pp2;

    //// pp1 + pp2;

    //pp1.toString();
    //p2->toString();
    //p3->toString();

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
