/*
Create a program that will accept the integer values for month,
day, and year and then output the "long version" of the specified date.

For example, if month = 11, day = 5, and year = 2010,
output the string "November 5, 2010". If there is any invalid
input, display "Invalid date!" and end the program.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int m, d, y; //m = month, d = day, y = year
	
	bool hinto = false; //Declared boolean expression; Referenced by the do-while loop to "loop" the instructed tasks, provided the value isn't set to true later on wherein hinto = true leads to a full stop of the tasks.
		
	do //executes the process inside the braces { } while the bool value is set to as how it was declared, otherwise, break the process.
	{
		cout << "Enter month:" << ' ';	cin >> m;
		
		cout << "Enter day:" << ' ';	cin >> d;
		
		cout << "Enter year:" << ' ';	cin >> y;
		
		cout << "\n";
			
		//Here lies
		//input conditions
		
		if (m >= 13 || m <= 0 || d <= 0 || ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d >= 32)) || ((m == 4 || m == 6 || m == 9 || m == 11) && (d >= 31)) || ((m == 2) && (d >= 29)) || (y <= 0))
			{
				cout << "Invalid Date! \n\n"; //This is the error message shown when the above conditions aren't met.
					break; //Responsible for ending the program when invalid date values are entered.
			}
			
		//Here dies
		//input conditions
			
		else
		
		//START MONTH//
		
		switch(m) //switches respective values to integer m
			{
				case 1: //month #
					cout << "January"; //month name
					break; //move on
				case 2:
					cout << "February";
					break;
				case 3:
					cout << "March";
					break;
				case 4:
					cout << "April";
					break;
				case 5:
					cout << "May";
					break;
				case 6:
					cout << "June";
					break;
				case 7:
					cout << "July";
					break;
				case 8:
					cout << "August";
					break;
				case 9:
					cout << "September";
					break;
				case 10:
					cout << "October";
					break;
				case 11:
					cout << "November";
					break;
				case 12:
					cout << "December";
					break;
			}
		//END MONTH//
		
		//START DATE & YEAR//
		
		cout << ' ' << d << "," << ' ' << y << "\n\n"; //prints the day # along with the year. the two '\n's is responsible for eyecandy format/spacing
		
		//END DATE & YEAR//
			
	} while (!hinto); //references the declared 'hinto = false' boolean so the process would go on given the declared value of the boolean expression
	
	_getch();
	return 0;
}
