#include <iostream>
#include "windows.h"
std::string nn{}; int chc{}, q1{}, q2{}, q3{};
void pes()
{
	system("cls"); std::cout << "Welcome on xQuiz, " + nn + "\nin the test you will get a few questions about xxx, if you answer are correct you will win otherwise you can try again.\nif you want continue to test vote 1\n  Your choice: "; std::cin >> chc;
	switch (chc)
	{
		system("cls");
	case 1:
		std::cout << "question 1: Where im from?\n1) Slovakia\n2) Hungary\n3) Poland\n  Your choice: "; std::cin >> q1;
		std::cout << "question 2: Create date of my youtube chanel?\n1) 22.6.2011\n2) 14.2.2019\n3) 31.12.2018\n  Your choice: "; std::cin >> q2;
		std::cout << "question 3: Who is first member at my discord server?\n1) kvetinka\n2) kvetinka1\n3) kvetinka2\n  Your choice: "; std::cin >> q3;
		
		if (q1 == 1 and q2 == 2 and q3 == 3)
		{
			std::cout << "your answers are correct, Nice job!\n"; system("pause");
		}
		else
		{
			std::cout << "your answers are bad :( wich you luck in next try"; Sleep(2200); pes(); chc = 0, q1 = 0, q2 = 0, q3 = 0;
		}

		break;

	default:
		std::cout << "it seems that the value was not found, try to use the correct one"; Sleep(1500); pes();
		break;
	}
}
int main()
{ SetConsoleTitleA("xQuiz");
	std::cout << "select nickname: "; std::cin >> nn; pes();
}
