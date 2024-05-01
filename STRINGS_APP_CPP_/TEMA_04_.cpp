
#include <iostream>


static void CE_TEMA_CONVERSIE_()
{

	float GradeCelsius = 0.0, GradeFahrenheit = 0.0;

	std::cout << "Cate Grade Celsius sunt acum ?" << std::endl;
	std::cin >> GradeCelsius;
	std::cout << std::endl;

	GradeFahrenheit = (GradeCelsius * 1.8) + 32.0;

	std::cout << "Acum sunt " << GradeFahrenheit << " Grade Fahrenheit" << std::endl;
	std::cout << std::endl;


}


/*

	Creati o aplicatie ce poate face conversie de la grade celsiul la fahrenheit

	EXinput : 20
	ExOupt : 68

*/