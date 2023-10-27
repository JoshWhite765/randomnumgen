#include <iostream>
#include <string>
#include <time.h>


using namespace std;

int main()
{
	int userNum, randomNum, score;
	bool found = false;


	srand(time(NULL));
	randomNum = rand() % 100 + 1;

	cout << randomNum << endl;


	while (found == false) {

		cout << "Enter a number: " << endl;
		cin >> userNum;
		
		if (cin.fail() || cin.peek() != '\n') {
			cout << "Invalid input" << endl;
			cin.clear(); //clear bad input flag
			cin.ignore(1000, '\n'); //ignore input
		}
		else if ((userNum <= 0) || (userNum >= 101)) {
			cout << "invalid input" << endl;
		}

		else {
			if (userNum == randomNum) {
				cout << "Congrats you guessed the number" << endl;
				found = true;

			}
			else if (userNum > randomNum) {
				cout << "You're too high" << endl;
				score = userNum - randomNum;
				cout << "you were -" << score << " close to the random number" << endl;
			}
			else {
				cout << "You're too low" << endl;
				score = randomNum - userNum;
				cout << "you were +" << score << " close to the random number" << endl;
			}
		} 
	}


	cout << "Input number: " << userNum << endl;


	return 0;
}