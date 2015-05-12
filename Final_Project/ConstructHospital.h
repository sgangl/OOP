#pragma once
#include "stdafx.h"

class ConstructHospital
{
public:
	void setHospitalBuilder(HospitalBuilder* build_hospital);
	Hospital* getHospital();
	void buildHospital();
private:
	HospitalBuilder* nuHospitalBuilder;
};