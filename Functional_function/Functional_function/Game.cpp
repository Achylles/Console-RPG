#include "pch.h"
#include "Game.h"
using namespace std;
Game::Game()
{

}	

Game::~Game()
{
}

void Game::playGame()
{
	cout << "\nPlease select a class.\n1.Paladin.\n2.Mage.\n";
	int classChoice;
	cin >> classChoice;
	//todo: Fix choices that aren't 1 or 2.
	//create cases for 1 and 2
	cout << "Enter your name.\n";
	string name;
	cin >> name;
	//todo: make name character restrictions.
	cout << "You face three giant orcs. One is red, the other - blue. The last one is green.\n";
	cout << "Before they do you any harm, you have the opportunity to make a choice:\n";
	cout << "\n1.Attack.\n";
	cout << "2.Cast a spell.\n";
	cout << "3.Assume a defensive position.\n";
	int choice=0;
	cin >> choice;

	Player *p = NULL;
	vector<Creature> m_Creatures;
	m_Creatures.reserve(3);
	m_Creatures.push_back(Creature("Red orc",10,35));
	m_Creatures.push_back(Creature("Green orc", 8, 40));
	m_Creatures.push_back(Creature("Blue orc", 6, 50));
	vector<Creature>::iterator iter;
	switch (choice)
	{
	case 1:
		cout << "\nSelect your target\n";
		for (iter = m_Creatures.begin(); iter != m_Creatures.end(); ++iter)
		{
			cout << iter - m_Creatures.begin()<< " "<<iter->getName() << " ";
			int target;
			cin >> target;
			p->attack(&m_Creatures[target]);
			cout << endl;
			cout << m_Creatures[target].getName() << " now has " << m_Creatures[target].getHealth() << " health.\n";
		}
		
		break;
	case 2:
		//p.cast();
		break;
	
	default:
		//
		break;
	}
}