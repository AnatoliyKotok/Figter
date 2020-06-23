#include "MixsedFighter.h"
#include"Characteristic.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	MixsedFihter fighter("TJ Dilashow", 23, 65.1);
	fighter.print();
    Characteristic fighter1("UFS",12,3,"Cehempin");
	Аchievement fighter2;
	fighter2.PushBack(&fighter1);
	fighter2.print();
	
}