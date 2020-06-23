#include "MixsedFighter.h"

void MixsedFihter::setName(const string& name)
{
	this->name = name;
}

void MixsedFihter::setAge(size_t age)
{
	this->age = age;
}

void MixsedFihter::setWeight(float weight)
{
	this->weight = weight;
}

void MixsedFihter::setbase(const string& base)
{
	this->base = base;
}

const string& MixsedFihter::getBase()
{
	return base;
}

const string& MixsedFihter::getName() const
{
	return name;
}

size_t MixsedFihter::getAge() const
{
	return age;
}

float MixsedFihter::getWeight() const
{
	return weight;
}

MixsedFihter::MixsedFihter(const string name, size_t age, float weight,const string base)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setbase(base);
}

void MixsedFihter::print()
{
	cout << "\nName->" << name << "\n\tAge->" << age << "\n\tWeight->" << weight <<"\n\tBase->"<<base <<endl;

}
