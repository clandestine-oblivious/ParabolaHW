#include <iostream>
#include "Quadratic.h"

using namespace std;

int main()
{
    cout << endl << "Hi! Welcome to Parabola Helper :)" << endl << endl;

/* Setting of desired coefficients */
    int coefA, coefB, coefC;

    cout << "------------------------------" << endl;
    cout << "Enter coefficient values" << endl;
    cout << "A= ";
    cin >> coefA;
    cout << "B= ";
    cin >> coefB;
    cout << "C= ";
    cin >> coefC;
    cout << "Your equation is: " << coefA <<"x^2 + " << coefB << "x + " << coefC << endl;
    cout << endl;

    Quadratic equation;
    equation.setvalues(coefA, coefB, coefC);

/* Calculation of Y for a given X */
    int valueX, valueY;
    cout << "Enter value of X:";
    cin >> valueX;
    cout << endl;
    valueY = equation.calY(valueX);
    cout << "Value of (Y) in terms of (X)= ";
    cout << valueY << endl;


/* Display the type of extremum for the Polynomial */
    equation.extremumY();
    cout << endl;

/* Display the Determinant and Roots */

    equation.discriminant();
    cout << "------------------------------" << endl;

    return 0;
}
