#include "Characteristic.h"
#include<iostream>
#include<vector>
using namespace std;


void Characteristic::setNameOr(const string& name)
{
	this->nameOr = name;
}

const string& Characteristic::getnamrOr()
{
	return nameOr;
}

void Characteristic::setVictory(size_t v)
{
	this->victory = v;
}

size_t Characteristic::getVictory()
{
	return victory;
}

void Characteristic::SetLoss(size_t loss)
{
	this->loss = loss;
}

size_t Characteristic::getLoss()
{
	return loss;
}

void Characteristic::setType(const string& type)
{
	this->type = type;
}

const string& Characteristic::getType()
{
	return type;
}

void Characteristic::show()
{
	cout << "\tName organization->" << nameOr << endl;
	cout << "\tWins->" << victory << endl;
	cout << "\tLoss->" << loss << endl;
	cout << "\tType->" << type << endl;
}

Characteristic::Characteristic( const string nameOr, size_t wins, size_t loss, const string type)
	
{
	setNameOr(nameOr);
	setVictory(wins);
	SetLoss(loss);
	setType(type);
}

void Аchievement::PushBack(Characteristic* ch)
{
	ach.push_back(ch);
}

void Аchievement::print()
{
	for (size_t i = 0; i < ach.size(); i++)
	{
		ach[i]->show();
	}
}
