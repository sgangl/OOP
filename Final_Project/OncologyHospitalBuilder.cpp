#include "stdafx.h"

OncologyHospitalBuilder::~OncologyHospitalBuilder() {}

void OncologyHospitalBuilder::buildDoctor() { builder_hospital->setDoctor("Dr. Jones"); }

void OncologyHospitalBuilder::buildSpecialty() { builder_hospital->setSpecialty("Oncology"); }

void OncologyHospitalBuilder::buildTransplants() { builder_hospital->setTransplant(false); }