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
	return 0;
}