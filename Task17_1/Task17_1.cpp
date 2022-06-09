#include <iostream>
void sw(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main()
{
	int a;
	int b;
	std::cout << "Enter 2 numbers :";
	std::cin >> a >> b;
	sw(&a, &b);
	std::cout << a << " " << b<<std::endl;
}

