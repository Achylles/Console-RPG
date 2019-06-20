#pragma once
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Unit
{
public:
	Unit();
	virtual ~Unit();

	bool isAlive();
	int attack(Unit* target);
	void cast(Unit* target);
	void takeDamage(int amount);

	//getters here
	virtual inline const string getName() const { return m_Name; }
	virtual inline int getDamage() const { return m_Damage; }
	virtual inline int getHealth() const { return m_Health; }
protected:
	string m_Name;
	int m_Damage;
	int m_Health;
};