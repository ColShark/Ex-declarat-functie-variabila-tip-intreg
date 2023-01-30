#include <iostream>

void AfisareNumar();

int main()
{
	for (int repetare_apel = 0; repetare_apel <= 5; repetare_apel++)
	{
		AfisareNumar();
	}

	system("pause");
}

void AfisareNumar()
{
	static int numar = 0;
	std::cout << numar++ << std::endl;
}