﻿#include <iostream>



int main()
{
    std::cout << "Enter N:";
    int N;
    std::cin >> N;

	char x = 'X';

	for (int i = 0; i < N; i++)
	{





		for (int j = 0; j < N; j++)
		{

			std::cout << x;
			if (x == 'X')
			{

				x = '.';
			}
			else
			{
				x = 'X';
			}
		}

		if (x == 'X')
		{

			x = '.';
		}
		else
		{
			x = 'X';
		}
		std::cout << std::endl;


	}


}