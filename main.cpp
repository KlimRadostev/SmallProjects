/*#include "creator.hpp"
  #include "etor.hpp"*/
#include <iostream>

template<typename X, typename Y, typename Z>
void	addere(X &val, Y const &val1, Z const &val2)
{ val = val1 + val2; }

int main()
{
/*	Crea	x;

	int x1 = x.createsInt();

	std::cout << x1 << std::endl;
*/

/*	double x, y;
	x = 10.1123;
	y = 7.123;
	std::cout << (long long int)x % (long long int)y << std::endl;*/


	int a = 12345;
	char b = 100;
	int c;

	::addere(c, a, b);
	std::cout << std::fixed << c << std::endl << std::endl;


	long double x = 91234.5;
	long double y = 9123.455678;

	long double x1 = x + y;
	long double x2 = y + x;

	std::cout << std::fixed << x1 << " " << std::to_string(x1) << std::endl;
	std::cout << x2 << " " << std::to_string(x2) << std::endl;
	return (0);
}
