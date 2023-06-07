#include<iostream>

#define MON "Monday"
#define TU  "Tuesday"
#define WE  "Wednesday"
#define TH  "Thursday"
#define FR  "Friday"
#define SA  "Saturday"
#define SU  "Sunday"
#define DAY(day) day

int main()
{
	int command = 0;
        std::cout << "For EXIT enter < 0 > " << std::endl;
	do {
		std::cout << "Enter the number of the day of the week: " << std::endl;	      
		std::cin >> command;
		switch (command)
		{
		case 1:
			std::cout << DAY(MON) << std::endl;
			break;
		case 2:
			std::cout << DAY(TU) << std::endl;
			break;
		case 3:
			std::cout << DAY(WE) << std::endl;
			break;
		case 4:
			std::cout << DAY(TH) << std::endl;
			break;
		case 5:
			std::cout << DAY(FR) << std::endl;
			break;
		case 6:
			std::cout << DAY(SA) << std::endl;
			break;
		case 7:
			std::cout << DAY(SU) << std::endl;
			break;
		case 0: 
			std::cout << "Exit" << std::endl;
			break;
		default: std::cout << "Enter error!" << std::endl;
			break;
		}
	} while (command != 0);
	return 0;
}