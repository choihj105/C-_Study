#include <iostream>
using namespace std;

int main()
{
	long long worldPopulation;
	long long koreaPopulation;

	cout << "Enter the world's population: ";
	cin >> worldPopulation;
	cout << "Enter the population of KOR : ";
	cin >> koreaPopulation;

	cout << "The population of KOR is " << (float)koreaPopulation / worldPopulation << "% of the world population.";
		
	return 0;
}