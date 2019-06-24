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
	void useMana(int);
	virtual bool isAlive();
	void setAttackDamage(float coeff);
	//getters here
	inline const string getName() const { return m_Name; }
	inline int getHealth() const { return m_Health; }
	inline int getAtkDamage() const { return m_AtkDamage; }
protected:
	string m_Name;
	int m_Health;
	int m_AtkDamage;
	int m_Mana;
};

#endif //UNIT_H