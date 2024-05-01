
#include <iostream>

static void CE_TEMA_RESTAURANT_()
{

	int CantitatePesti = 0, TotalCiorbe = 0;

	std::cout << "Cati pesti ai ?" << std::endl;
	std::cin >> CantitatePesti;
	std::cout << std::endl;
	
	std::cout << "Poti face " << (TotalCiorbe = CantitatePesti / 3) << " Cirobe de peste !" << std::endl;
	std::cout << std::endl;

}


/*

	Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti
	ca sa pregatesti o ciorba de peste numita Trio
	Scrieti un program ce va lua un input de numar de pesti si sa se printeze cate ciorbe trio se pot obtine.

	ExInput: 14
	ExOutput:4

*/