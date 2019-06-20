#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <thread>
#include <ctime>
using namespace std;

class Spell
{
public:
	enum rank {LOW = 1, MEDIUM, HIGH};
	enum name {};
	enum effect{damage = 1, stun, heal, shield};
	Spell(rank r, name n, bool isValid = true);
	int getSpell();
private:
	rank m_spell_rank;
	name m_spell_name;
	int m_Cost;
};