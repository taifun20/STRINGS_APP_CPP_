#include <iostream>

static void CE_Tema_Retragere_Bani_()
{
	int SumaBani = 0, SumaRetragere = 0, SumaFinala = 0, PinCardIntrodus = 0;
	const int PinCard = 2020;
	std::string CardIntrodus;

	std::cout << "Introduceti cardul (Da sau Nu) -> ";
	std::cin >> CardIntrodus;
	std::cout << std::endl;

	if (CardIntrodus == "Da") {
		std::cout << "Introduceti pinul : ";
		std::cin >> PinCardIntrodus;
		std::cout << std::endl;

		if (PinCardIntrodus == PinCard) {
			SumaBani = 245050;
			std::cout << "Sold : " << SumaBani << std::endl;
			std::cout << "Cat doriti sa retrageti ?" << std::endl;
			std::cin >> SumaRetragere;

			if (SumaRetragere >= SumaBani) {
				std::cout << "Fonduri insuficiente !!!" << std::endl;
				std::cout << std::endl;
			}
			else {
				SumaFinala = SumaBani - SumaRetragere;
				std::cout << "Suma retrasa: " << SumaRetragere << std::endl;
				std::cout << "Fonduri: " << SumaFinala << std::endl;
				std::cout << std::endl;
			}

		}
		else {
			std::cout << "Cod PIN gresit !!!" << std::endl;
			std::cout << std::endl;
		}
	}
	else if (CardIntrodus == "Nu") {
		std::cout << "Sa aveti o zi buna =)" << std::endl;
		std::cout << std::endl;
	}
	else {
		std::cout << "Eroare de sistem, repornire sistem !!!" << std::endl;
		std::cout << std::endl;
	}

}


/*
		Vrei sa retragi  niste bani din contul tau bancar.
	Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei sa o scoti.
	Calculati si prinati cat ramane in contul tau dupa retragere.
	Introduceti cardul =]

	Input:
	450000
	9000
	Output:
	441000

*/