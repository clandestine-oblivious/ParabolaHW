#include "Quadratic.h"
#include <iostream>
#include <cmath>
using namespace std;

Quadratic::Quadratic()
{
    //ctor
}

Quadratic::~Quadratic()
{
    //dtor
}

// function that sets the coefficients to desired values //

void Quadratic::setvalues(int a, int b, int c)
{
    A = a;
    B = b;
    C = c;
}
// function that calculates y for a given value of x //

int Quadratic::calY (int X)
{
    int Y;
    Y = A*(X*X) + (B*X) + C;

    return Y;
}

// function that tells whether the polynomial has a //
// maximum, a minimum, or no extremum, and gives x and y for the extremum (if any) //
void Quadratic::extremumY ()
{
   int extremum;

   extremum = -B/ (2*A);
   cout << "Extremum: " << extremum << endl;

    if (A>0)
    {
        cout << "The polynomial's extremum is minimum." << endl;
    }
    else if (A<0)
    {
        cout << "The polynomial's extremum is maximum." << endl;
    }
    else
    {
        cout << "The polynomial has no extremum." << endl;
    }


}

 // function that tells how many roots there are and returns the roots (if any) //
 void Quadratic::discriminant ()
 {
     int D, R1, R2;
     D= (B*B)-(4*A*C);
     R1= (-B + sqrt (D))/ (2*A);
     R2= (-B - sqrt (D))/ (2*A);

     cout << "Root= " << R1 << endl;

     if (D>0)
     {
         cout << "Number of roots: 2" << endl;
         cout << "Roots= " << R1 << "and" << R2 << endl;
     }
    else if (D<0)
    {
        cout << "There is no root." << endl;
    }
    else
    {
        cout << "Number of roots: 1" << endl;
    }
 }
