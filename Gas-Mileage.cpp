/* 3. 4.13 (Gas Mileage) Drivers are concerned with the mileage obtained by their
automobiles. One driver has kept track of several trips by recording miles driven
and gallons used for each trip. Develop a C++ program that uses a while statement
to input the miles driven and gallons used for each trip(c++ how to program) */
#include <iostream>
using namespace std ;
#include <iomanip>

int main (){
    double total (0) , miles(0) , tripCounter (0) , mpg(0);
    cout << "Enter miles driven (-1 to quit): " ;
    cin >> miles ;

    while (miles != -1){
    double gallons (0) ;
    tripCounter++ ;
    cout << "Enter gallons used: " ;
    cin >> gallons ;
    cout << setprecision(6) << fixed;
    mpg =  miles / gallons ;
    cout << "MPG this trip:" << mpg << endl ;
    total = total + mpg ;
    cout << "Total MPG: " << total/tripCounter << endl <<endl ;
    cout << "Enter miles driven (-1 to quit): " ;
    cin >> miles ;
    }

    cout << "\nTotal MPG: " << total<<endl ;
     
}