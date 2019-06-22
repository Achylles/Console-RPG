#ifndef UNIT_H
#define UNIT_H
#include <iostream>
#include <string>
using namespace std;

class Unit
{
public:
	//default constructor and destructor
	Unit();
	virtual ~Unit();
	//regular functions
	virtual int attack(Unit* target);
	virtual void cast(Unit* target);
	virtual void initialize(string& name, int atkDamage, int health);
	void takeDamage(int);
	virtual bool isAlive();
	//getters here
	inline const string getName() const { return m_Name; }
	inline int getHealth() const { return m_Health; }
	inline int getAtkDamage() const { return m_AtkDamage; }
protected:
	string m_Name;
	int m_Health;
	int m_AtkDamage;
};

#endif //UNIT_H