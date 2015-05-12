#pragma once
#include "stdafx.h"

class OncologyHospitalBuilder : public HospitalBuilder
{
	public:
		virtual ~OncologyHospitalBuilder();
		virtual void buildDoctor();
		virtual void buildSpecialty();
		virtual void buildTransplants();
};