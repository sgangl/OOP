#pragma once
#include "stdafx.h"

class CardiacHospitalBuilder : public HospitalBuilder
{
	public:
		virtual ~CardiacHospitalBuilder();
		virtual void buildDoctor();
		virtual void buildSpecialty();
		virtual void buildTransplants();
};