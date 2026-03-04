#include <iostream>
#include <random>  // For random number generation

using namespace std;

int main() 
{
	random_device rd;  // Seed for random number generator
	mt19937 gen(rd()); // Mersenne Twister engine
	uniform_int_distribution<> dis(1, 100); // Distribution for numbers between 1 and 100

	int num1 = dis(gen); // Generate first random number
	int num2 = dis(gen); // Generate second random number

	cout << "\nWelcome to the Math Tutor!:\n";
	cout << "Solve the following problem:\n";
	cout << num1 << "+" << num2 << "= ?" <<endl:

	cout << "Press Enter when you are ready to see the answer...";
	cin.get();  // Wait for Enter key

	int answer = num1 + num2;
	cout << "The correct answer is: " << answer << endl;

	return 0;
}