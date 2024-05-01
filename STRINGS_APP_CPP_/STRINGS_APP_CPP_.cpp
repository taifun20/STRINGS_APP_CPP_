
#include <iostream>
#include <string>
#include "TEMA_01_.cpp"
#include "TEMA_02_.cpp"
#include "TEMA_03_.cpp"
#include "TEMA_04_.cpp"


void CE_Curs_()
{
	/* */
	char c = 'c';
	std::cout << c << std::endl;

	std::string Nume;
	Nume = "Robert";
	std::cout << Nume << std::endl;
	std::string Prenume;
	Prenume = "Valentin";
	std::cout << Prenume << std::endl;

	std::string NumeComplet;
	NumeComplet = Nume + " " + Prenume; //concatenare
	std::cout << "Numele meu este " << NumeComplet << std::endl;

	std::string NumeUtiliator, PrenumeUtiliator, NumeCompletUtilizator;

	std::cout << "Cum te cheama ? " << std::endl;
	std::cin >> NumeUtiliator;

	std::cout << "Care este al doilea nume ? " << std::endl;
	std::cin >> PrenumeUtiliator;

	NumeCompletUtilizator = NumeUtiliator + " " + PrenumeUtiliator;
	std::cout << "Salut " << NumeCompletUtilizator << std::endl;
	
	/* */

	std::cout << "Care este masina ta preferata ?" << std::endl;
	std::string sMasinaPreferata_;
	std::cin.ignore();
	std::getline(std::cin, sMasinaPreferata_);
	std::cout << sMasinaPreferata_ << " este o buna alegere =]" << std::endl;
}


int main()
{
	CE_Curs_();
	//CE_Tema_Acvariu();
	//CE_Tema_Retragere_Bani_();
	//CE_TEMA_RESTAURANT_();
	//CE_TEMA_CONVERSIE_(); 
}

/*
	
	Tema :

		David si Alex au fiecare cate un acvariu.Sunt 8 pesti aurii in acavriul lui David,
	si 11 pesti colorari in acvariul lui Alex.Ajutai sa faca schimb intre ei.
	Faceti un schimb de valori ale variabirelor acvariuDavid si acvariuAlex.

	int main()
	{
	int acvariuDavid = 8;
	int acvariuAlex = 11 ;

	std::cout << "Numarul de pesti din acvariul lui David: " << acvariulDavid << std::endl;
	std::cout << "Numarul de pesti din acvariul lui Alex: " << acvariulAlex << std::endl;
	}


		Vrei sa retragi  niste bani din contul tau bancar.
	Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei sa o scoti.
	Calculati si prinati cat ramane in contul tau dupa retragere.
	Introduceti cardul =]

	Input:
	450000
	9000
	Output:
	441000

	   Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti
	ca sa pregatesti o ciorba de peste numita Trio
	Scrieti un program ce va lua un input de numar de pesti si sa se printeze cate ciorbe trio se pot obtine.

	ExInput: 14
	ExOutput:4

	Creati o aplicatie ce poate face conversie de la grade celsiul la fahrenheit

	EXinput : 20
	ExOupt : 68


	*/