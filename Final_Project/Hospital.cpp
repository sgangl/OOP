#include "stdafx.h"

void Hospital::setDoctor(const std::string& doctor)
{
	hospital_doc = doctor;
}

void Hospital::setSpecialty(const std::string& specialty)
{
	hospital_spec = specialty;
}

void Hospital::setTransplant(const bool doesTransplants)
{
	hospital_trans = doesTransplants;
}

void Hospital::printHospital() const
{
	std::cout << "Hospital Specialty: " << hospital_spec << std::endl;
	std::cout << "Hospital Doctor: " << hospital_doc << std::endl;
	std::cout << "Hospital Performs Transplants: " << hospital_trans << std::endl;
}