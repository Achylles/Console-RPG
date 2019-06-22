#include "Game.h"
#include "Player.h"
#include "Enemy.h"

void Game::playGame()
{
	playerActionMenu();
}

void Game::playerActionMenu()
{
	string playerName;
	cout << "\nEnter your name: "; //TODO: Fix the whitespace player name problem.
	cin >> playerName;
	vector<string> enemyNames;
	enemyNames.push_back("Red Orc"); //TODO: add actual  names to the orcs
	enemyNames.push_back("Green Orc");
	enemyNames.push_back("Blue Orc");

	p1->initialize(playerName, 40, 125);
	p2->initialize(enemyNames[0], 15, 30); //TODO: Store data in a file.
	p3->initialize(enemyNames[1], 12, 35);
	p4->initialize(enemyNames[2], 10, 40);

	vector<Unit*> enemies;
	enemies.push_back(p2);
	enemies.push_back(p3);
	enemies.push_back(p4);
	bool activeGame = true;
	while (activeGame)
	{
		int choice = 0;
		cout << "Choose your move:" << endl
			<< "1) Attack" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			vector<Unit*>::iterator iter;
			cout << "\nChoose your target:" << endl;
			for (iter = enemies.begin(); iter != enemies.end(); ++iter)
				if((*iter)->isAlive())
				cout << (*iter)->getName() << " . . ." << (*iter)->getHealth()<<" Health" << endl;
			int target=0;
			while (target<1 || target> enemies.size() + 1)
			{
				cout << "\nPlease select a proper target.";
				cin >> target;
				//TODO: Create a template function that will accept both string and integer
			}
			p1->attack(enemies[target-1]);
			cout<< endl<< enemies[target - 1]->getName() << " takes " << p1->getAtkDamage() << " damage.\n";
			if (!(enemies[target - 1]->isAlive()))
			{
				cout << enemies[target - 1]->getName() << " dies." << endl;
				
			}
			system("pause");
		}

		vector<Unit*>::iterator iter;
		for (iter = enemies.begin(); iter != enemies.end(); ++iter)
		{
			if ((*iter)->isAlive())
			{
				cout << (*iter)->getName() << " attacks you for " << (*iter)->getAtkDamage() << " damage." << endl;
				(*iter)->attack(p1);
			}
			cout << "Your Health: " << p1->getHealth() << endl << endl;
			
		}
		if (!(p1->isAlive()))
		{
			cout << p1->getName() << " has died.";
			activeGame = false;
		}
		if (!(p2->isAlive()) && !(p3->isAlive()) && !(p4->isAlive()))
		{
			cout << p1->getName() << " wins!!!";
			activeGame = false;
		}
	}
	delete p1;
	delete p2;
	delete p3;
	delete p4;
}



