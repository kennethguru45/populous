#include <iostream>
#include <unistd.h>

int main()
{


	for ( int j = 0 ; j < 22 ; j++)
	{
		std::cout << "\tCounting J :\t" << j << std::endl;
		sleep(1);
	}
}