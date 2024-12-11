#include <iostream>
#include "Array.hpp"

int	main()
{
    std::cout << std::endl << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;
    try
    {
        Array<int> empty;
        empty[2] = 10;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;

    {
        Array <comp> C(4);

        std::cout << "Complex type C: " << C << std::endl;
        C[1] = 68;
        std::cout << "Complex type C: " << C << std::endl;
    }

    std::cout << std::endl << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;
	
    try 
	{
		Array<int> A(6);
		std::cout << "A: " << A << std::endl;
		std::cout << "Change index 2 value in A" << std::endl;
		A[2] = 42;
		std::cout << "A: " << A << std::endl;
		std::cout << "Copy array A to array B\n" << std::endl;
		Array<int> B(A);
		std::cout << "B: " << B << std::endl;
		std::cout << "change index 0 value in B\n" << std::endl;
		B[0] = -42;
		std::cout << "A: " << A << std::endl;
		std::cout << "B: " << B  << std::endl;
        std::cout << "Incorrect index exception:" << std::endl;
        A[14] = 12;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;
	return (0);
}

/* #define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
} */

