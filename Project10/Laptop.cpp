#include<iostream> 
#include "Laptop.h"
using namespace std;

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double prram, const char* mssd, double prssd, const char* mgpu, double prgpu) :cpu(mcpu, prcpu) , ram(mram, prram) ,ssd(mssd, prssd) , gpu(mgpu, prgpu)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;
}

double Laptop::GetPrice()
{
	return price + cpu.GetPrice() + ram.GetPrice() + ssd.GetPrice() + gpu.GetPrice();
}

void Laptop::Output()
{
	cout << "Model: " << name << endl
		<< "Cpu: " << cpu.GetModel() << endl
		<< "Ram: " << ram.GetModel() << endl
		<< "Ssd: " << ssd.GetModel() << endl
		<< "Gpu: " << gpu.GetModel() << endl
		<< "Laptop price = " << GetPrice() << " $\n";
}

Laptop::~Laptop()
{
	delete[] name;
	price = 0;
}

Ram::Ram()
{
	model = nullptr;
	price = 0;
}

Ram::Ram(const char* m, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	price = pr;
}

double Ram::GetPrice()
{
	return price;
}

const char* Ram::GetModel()
{
	return model;

}

Ram::~Ram()
{
	delete[]model;
}


SSD::SSD()
{
	model = nullptr;
	price = 0;
}

SSD::SSD(const char* m, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	price = pr;
}

double SSD::GetPrice()
{
	return price;
}

const char* SSD::GetModel()
{
	return model;

}

SSD::~SSD()
{
	delete[]model;

}

GPU::GPU()
{
	model = nullptr;
	price = 0;
}

GPU::GPU(const char* m, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	price = pr;
}

double GPU::GetPrice()
{
	return price;
}

const char* GPU::GetModel()
{
	return model;
}

GPU::~GPU()
{
	delete[] model;
}

