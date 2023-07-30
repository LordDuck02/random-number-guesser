#include <iostream>
#include <cstdlib> //if this doesnt work im gonna mcnutt
#include <ctime>
//random number guesser from 1-10
//must be global
int random_numb;

void randomnumb() {
	//make the thingy i forogr
	std::srand(static_cast<unsigned int>(std::time(0)));
	random_numb = std::rand() % 10 + 1; // get random number
}

int main() {
	int input;
	std::cout << "ayo random number guesser" << std::endl;
	std::cout << "guess a number from 1-10" << std::endl;
	randomnumb();
	std::cin >> input;
	//yeah this should work
	if (input == random_numb) {
		std::cout << "congratulation u did it" << std::endl;
	} else {
		std::cout << "skill issue, it was: " << random_numb << std::endl;
	}
	return 0;
}
