#include "stdafx.h"

HospitalBuilder::~HospitalBuilder() {}

Hospital* HospitalBuilder::getHospital() { return builder_hospital; }

void HospitalBuilder::createNewHospital()
{
	builder_hospital = new Hospital;
}