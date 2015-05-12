CC = g++
CFLAGS = -g -Wall -std=c++11

all: Test_Hospital

Test_Hospital: Hospital.o HospitalBuilder.o CardiacHospitalBuilder.o OncologyHospitalBuilder.o ConstructHospital.o main.o
	$(CC) $(CFLAGS) Hospital.o HospitalBuilder.o CardiacHospitalBuilder.o OncologyHospitalBuilder.o ConstructHospital.o main.o -o Test_Hospital

Hospital.o: Hospital.h Hospital.cpp
	$(CC) $(CFLAGS) -c Hospital.cpp

HospitalBuilder.o: HospitalBuilder.h HospitalBuilder.cpp
	$(CC) $(CFLAGS) -c HospitalBuilder.cpp

CardiacHospital.o: CardiacHospitalBuilder.h CardiacHospitalBuilder.cpp
	$(CC) $(CFLAGS) -c CardiacHospital.cpp

OncologyHospital.o: OncologyHospitalBuilder.h OncologyHospitalBuilder.cpp
	$(CC) $(CFLAGS) -c OncologyHospital.cpp

ConstructHospital.o: ConstructHospital.h ConstructHospital.cpp
	$(CC) $(CFLAGS) -c ConstructHospital.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) Test_Hospital *.o