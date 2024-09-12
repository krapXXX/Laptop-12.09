#pragma once
#include "Cpu.h"
class Ram
{
	char* model;
	double price;
public:
	Ram();
	Ram(const char* m, double pr);
	double GetPrice();
	const char* GetModel();
	~Ram();
};
class SSD
{
	char* model;
	double price;
public:
	SSD();
	SSD(const char* m, double pr);
	double GetPrice();
	const char* GetModel();
	~SSD();
};
class GPU
{
	char* model;
	double price;
public:
	GPU();
	GPU(const char* m, double pr);
	double GetPrice();
	const char* GetModel();
	~GPU();
};
class Laptop
{
	char* name;
	double price;
	Cpu cpu;
	Ram ram;
	SSD ssd;
	GPU gpu;
public:
	Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double prram, const char* mssd, double prssd, const char* mgpu, double prgpu);
	double GetPrice();
	void Output();
	~Laptop();
};
