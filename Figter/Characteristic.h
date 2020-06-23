#pragma once
#include "MixsedFighter.h"
#include<vector>

class Characteristic :
	public MixsedFihter
{
private:
	string nameOr = "Noname";
	size_t victory = 0;
	size_t loss = 0;
	string type = "regural fighter";
	
	
public:
	void setNameOr(const string& name);
	const string& getnamrOr();
	void setVictory(size_t v);
	size_t getVictory();
	void SetLoss(size_t loss);
	size_t getLoss();
	void setType(const string& type);
	const string& getType();
	void show();
	Characteristic( const string nameOr="None",size_t wins=4,size_t loss=2,const string type="regular");
};
class Аchievement {
public:
	void PushBack( Characteristic* ch );
	void print();
	Аchievement() = default;
private:
	vector<Characteristic*>ach;
};
