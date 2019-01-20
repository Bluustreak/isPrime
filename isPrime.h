#pragma once
#include <cmath>
bool isPrime(unsigned long long testNumber)   		// testNumber may not be larger than 18,446,744,073,709,551,615
{
	unsigned long upperLimit = sqrt(testNumber); 	// no need to check testNumber's divisability with anything over upperLimit.. due to reasons I don't quite understand.

	for (unsigned int i = 2; i <= upperLimit; i++)
		if (testNumber%i == 0)
			return false;							//if the number is evenly divisible with i, it's not a prime

	return true;
}