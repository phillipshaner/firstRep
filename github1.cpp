//============================================================================
// Name        : Github1
// Author      : Phillip Shaner
// Date        : Finished Dec.5
// Description : The program searches for a number.
//============================================================================

//includes libraries required by the program
#include <iostream>
#include <ctime>

//declares the namespace used
using namespace std;

//function prototype
int random_number();

//the main function where the program begins
int main() {
	//makes it possible for numbers generated to be random
	srand(time(0));

	//declares an array of 100 numbers
	int numbers[100];

	//loops and generates the numbers, stores them in an array
	for (int i = 0; i < 100; ++i)
		numbers[i] = random_number();

	//declares a variable to store the number to search and its
	//frequency in the array
	int search;
	int frequency = 0;

	//loops, asks for the number and validates it.
	while(true){
		cout << "Enter the number to search (0-10): ";
		cin >> search;
		if(search > -1 and search < 11)
			break;
		else
			cout << "Number out of range. valid numbers (0-10)"<<endl;
	}

	//loops and searches for the number, the counts for its
	//frequency
	for (int i = 0; i < 100; ++i)
		if(numbers[i] == search)
			frequency++;

	//prints out the results
	if(frequency != 0)
		cout << "The number "<<search <<" is available "<<frequency<<" times."<<endl;
	else
		cout << "The number is not available."<<endl;

	//prints a goodbye message
	cout << "Thank you. Goodbye..!"<<endl;
	return 0;
}

/**
 * random_number function, generates a random number between 0-10 inclusive.
 * @return the random number generated
 */
int random_number(){
	return (rand()%11);
}
