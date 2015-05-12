#include "stdafx.h"

void ConstructHospital::setHospitalBuilder(HospitalBuilder* build_hospital) { nuHospitalBuilder = build_hospital; }

Hospital* ConstructHospital::getHospital() { return nuHospitalBuilder->getHospital(); };

void ConstructHospital::buildHospital()
{
	nuHospitalBuilder->createNewHospital();
	nuHospitalBuilder->buildDoctor();
	nuHospitalBuilder->buildSpecialty();
	nuHospitalBuilder->buildTransplants();
}