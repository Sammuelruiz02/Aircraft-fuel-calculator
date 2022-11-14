#include <iostream>
#include <math.h>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;


char command = 'y';


int main() {

double distance; 

double timeinhours;

int minutes;

double extrahalfhourfuel = .5 * 8.4;

 while (command != 'n')
 
 {
 
    cout <<"\n\nAircraft Fuel Calculator\n";

    cout <<"\n\nDistance in nautical miles: ";
    cin >> distance;

    timeinhours = distance / 120;

    int hours = floor(timeinhours)  ;

    minutes = int(timeinhours * 60) % 60;



    double flight_timeminutes;


    double fuel = (timeinhours * 8.4) + extrahalfhourfuel;


    cout << "Flight time: "<< hours << "hour(s) and " << minutes << " minute(s)";

    cout << "\nRequired fuel: " << setprecision(3) << fuel ; 
    
    cout << "\n\nContinue? (y/n): " ;
    cin >> command ; 
    cout << "\n\nBye! ";
    }







 return 0;
 }