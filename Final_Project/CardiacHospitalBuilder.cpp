#include "stdafx.h"

CardiacHospitalBuilder::~CardiacHospitalBuilder() {}

void CardiacHospitalBuilder::buildDoctor() { builder_hospital->setDoctor("Dr. Smith"); }

void CardiacHospitalBuilder::buildSpecialty() { builder_hospital->setSpecialty("Cardiology"); }

void CardiacHospitalBuilder::buildTransplants() { builder_hospital->setTransplant(true); }