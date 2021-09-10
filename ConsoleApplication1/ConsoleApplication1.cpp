#include <iostream>

extern int q;
extern int w;
extern int z;
extern int x;

int main()
{
			{
				unsigned int a, b, c, d;
				c = 235;
				d = 64;
				b = 20;
				a = 2;
				float e;
				e = static_cast<float>(c) / d;
				std::cout << (a * (b + e)) << std::endl;
			};
		{
			unsigned int v, p;
			std::cout << "Enter random number: ";
			std::cin >> p;
			
			v = (p <= 21) ? 21 - p : 2 * (p - 21);
			std::cout << v << std::endl;
		};

	{
			float e;
			e = static_cast<float>(q) / w;
			std::cout << (x * (z + e)) << std::endl;
	};

	};

