#include "stdafx.h"

int main(int argc, char *argv[])
{
	ConstructHospital build;

	HospitalBuilder* cardiac = new CardiacHospitalBuilder;
	HospitalBuilder* oncology = new OncologyHospitalBuilder;

	build.setHospitalBuilder(cardiac);
	build.buildHospital();

	Hospital* cardiacHospital = build.getHospital();
	cardiacHospital->printHospital();
	std::cout << std::endl;

	build.setHospitalBuilder(oncology);
	build.buildHospital();

	Hospital* oncologyHospital = build.getHospital();
	oncologyHospital->printHospital();
	std::cout << std::endl;

	return 0;
}