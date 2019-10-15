/**
 PART C
 
 Write a program that will do the following steps (pseudo-code):
 1.    Display a welcome message and a title, such as “Working with random numbers and simple mathematical functions”. Then display the name of the library functions you are going to use in this program and the header files needed for each function.
 2.    Generate 3 random numbers between -5 and 13 inclusive:
 r1, r2, r3
 3.    Generate one random number between 2 and 6 inclusive, name it x
 4.    Calculate result as r3 to the power of x
 5.    Calculate the average of the 3 random numbers
 6.    Calculate the square root of the average
 7.    Calculate the geometric mean of the random numbers (the product of these numbers to the power of 1 / 3)
 8.    Display a line of “=”, such as “=================\n”
 9.    Display the following (with description):
 •     r1, r2, r3
 •     r3, x, and result
 •    average of the 3 numbers with 2 digits after the decimal point
 •    square root of the average with 4 digits after the decimal point
 •    geometric mean of the random numbers with 1 digit after the decimal point
 
 
 Shu Sian Lyu
 
 */
// hey!
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int min_Value = -5;
    const int max_Value = 13;
    const int MIN_VALUE = 2;
    const int MAX_VALUE = 6;
    int r1, r2, r3, x;
    double result, avg, squareroot, geo;
    int seed = time(0);
    srand(seed);
    r1 = (rand() % (max_Value - min_Value + 1)) + min_Value;
    r2 = (rand() % (max_Value - min_Value + 1)) + min_Value;
    r3 = (rand() % (max_Value - min_Value + 1)) + min_Value;
    x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    result = pow(r3, x);
    avg = (r1 + r2 + r3) / 3;
    squareroot = sqrt(avg);
    geo = pow((r1 * r2 * r3 * x), 1/3);
    cout << "=================\n";
    cout << r1 << ", " << r2 << ", " << r3 << endl;
    cout << r3 << ", " << x << ", " << result << endl;
    cout << setprecision(2) << fixed << avg << endl;
    cout << setprecision(4) << fixed << squareroot << endl;
    cout << setprecision(1) << fixed << geo << endl;
    
    return 0;
}
/*********************************************************************************
 SAVE THE FIRST OUTPUT HERE
 7, 4, -5
 -5, 6, 15625
 2.00
 1.4142
 1.0
 */


/*********************************************************************************
 SAVE THE SECOND OUTPUT HERE
 10, -2, 7
 7, 3, 343
 5.00
 2.2361
 1.0
 */

