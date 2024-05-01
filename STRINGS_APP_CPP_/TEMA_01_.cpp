#include <iostream>

static void CE_Tema_Acvariu()
{
	int acvariuDavid = 8, acvariuAlex = 11;
	int acvariulDavid, acvariulAlex;

	acvariulDavid = acvariuAlex;
	acvariulAlex = acvariuDavid;

	std::cout << "Numarul de pesti din acvariul lui David: " << acvariulDavid << std::endl;
	std::cout << "Numarul de pesti din acvariul lui Alex: " << acvariulAlex << std::endl;
	std::cout << std::endl;

}

/* 
David si Alex au fiecare cate un acvariu.Sunt 8 pesti aurii in acavriul lui David,
si 11 pesti colorari in acvariul lui Alex.Ajutai sa faca schimb intre ei.
Faceti un schimb de valori ale variabirelor acvariuDavid si acvariuAlex.

int main()
{
	int acvariuDavid = 8;
	int acvariuAlex = 11;

	std::cout << "Numarul de pesti din acvariul lui David: " << acvariulDavid << std::endl;
	std::cout << "Numarul de pesti din acvariul lui Alex: " << acvariulAlex << std::endl;
}
*/