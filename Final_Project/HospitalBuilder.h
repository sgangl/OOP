#pragma once
#include "stdafx.h"

class HospitalBuilder
{
	public:
		virtual ~HospitalBuilder();
		Hospital* getHospital();
		void createNewHospital();
		virtual void buildDoctor() = 0;
		virtual void buildSpecialty() = 0;
		virtual void buildTransplants() = 0;
	protected:
		Hospital* builder_hospital;
};