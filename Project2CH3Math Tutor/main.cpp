#include <iostream>
#include <random>  // For random number generation

using namespace std;

int main() 
{
	random_device rd;  // Seed for random number generator
	mt19937 gen(rd()); // Mersenne Twister engine
	return 0;
}