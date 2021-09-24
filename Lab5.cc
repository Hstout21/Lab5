/**
 *   @file: Lab5.cc
 * @author: Hunter Stout
 *   @date: 9/24/2021
 *  @brief: Highest & Lowest Temperature.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

int temperature = 0; //Temperature, main input for this program.
const int sentenial =-100; //Off-switch.
int lowmax = 1000; //Determining highest number.
int highmax = -1000; //Determining lowest number.
int counter = 1; //Loop counter.
int hightemp = 1; //Loop counter - high if.
int lowtemp = 1; //Loop counter - low if.

    cout << "*----------------------------------------------------*" << endl; // Opening message to the program :D
    cout << "* Enter the recorded temperatures this week. We will *" << endl;
    cout << "*  sort it for you! Type -100 to close the program.  *" << endl;
    cout << "*----------------------------------------------------*" << endl;

    while (temperature != sentenial){ //Main backbone, counts numbers in a loop before it reads the sentenial value.
       
        cin >> temperature;

        if( temperature != sentenial ){ //Secondary, to be ran first inside of loop before sentenial value.

            if (temperature >= highmax){ //Final math, if statement to find the highest temperature.

                highmax = temperature; //Finds potential high temperature.
                counter = hightemp; //Counter fix.
            }
            if (temperature < lowmax){ //Final math, if statement to find the lowest temperature.

                lowmax = temperature; //Finds potential low temperature.
                counter = lowtemp; //Counter fix.
            }
        }
        counter++; //Runs counter during loop.
    }
    cout << "*----------------------------------*" << endl; //Output message:)
    cout << "* Highest Temperature: " << highmax << endl;
    cout << "* lowest Temperature: " << lowmax << endl;
    cout << "*----------------------------------*" << endl;

    return (0);
}