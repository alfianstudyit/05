#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main() {
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	bool running = true;

	cout << setfill('0') << setw(2) << hours << ":"
		<< setfill('0') << setw(2) << minutes << ":"
		<< setfill('0') << setw(2) << seconds << endl;

		while (true)
		{
			if (running) {
				system("cls");
				// display the time in HH:MM:SS format
				cout << setfill('0') << setw(2) << hours << ":"
					<< setfill('0') << setw(2) << minutes << ":"
					<< setfill('0') << setw(2) << seconds << endl;

				Sleep(1000);
				seconds++;
				// if seconds reach 60, increment minutes and reset seconds
				if (seconds >= 60)
				{
					seconds = 0;
					minutes++;
				}
				// if minutes reach 60, increment hours and reset minutes
				if (minutes >= 60)
				{
					minutes = 0;
					hours++;
				}
				// if hours reach 24, reset hours
				if (hours >= 24)
				{
					hours = 0;
				}
			}
			else {
				Sleep(100);
			}

			if (_kbhit()) {
				char key = _getch();

				if (key == 's') { 
					running = !running;
				}
				else if (key == 'r') { 
					hours = minutes = seconds = 0;
				}
				else if (key == 'q') { 
					cout << "\nProgram dihentikan.\n";
					break;
				}
			}


		}


}