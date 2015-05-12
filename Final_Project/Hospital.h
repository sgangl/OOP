#pragma once
#include <string>

class Hospital
{
	public:
		void setDoctor(const std::string& doctor);
		void setSpecialty(const std::string& specialty);
		void setTransplant(const bool doesTransplants);
		void printHospital() const;

	private:
		std::string hospital_doc;
		std::string hospital_spec;
		bool hospital_trans;
};