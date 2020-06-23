#pragma once
#include<iostream>
#include<string>
using namespace std;
class MixsedFihter
{
public:
	void setName(const string& name);
	void setAge(size_t age);
	void setWeight(float weight);
	void setbase(const string& base);
	const string& getBase();
	const string& getName() const;
	size_t getAge() const;
	float getWeight() const;
	MixsedFihter(const string name="Noname", size_t age=23, float weight=78.3,const string base="none");
	void print();
private:
	string name;
	size_t age;
	float weight;
	string base;
};

