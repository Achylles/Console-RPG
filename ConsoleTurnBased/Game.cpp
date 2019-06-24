#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include "Level.h"



void Game::mainMenu()
{
	cout << "Welcome to " << m_GameName << endl << endl << endl;
	cout << "1.Play" << endl
		<< "2.Exit Game" << endl;
	int choice = 0;
	while (choice != 1 && choice != 2)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			continue;
			break;
		case 2:
			exit(0);
			break;
		default:
			cout << "Unknown choice.\n";
			break;
		}
	}
}

int Game::characterCreationMenu()
{
	system("cls");
	cout << "\nPlease select a class" << endl
		 << "1.Paladin" << endl
		 << "2.Mage" << endl;
	int choice=0;
	while (choice != 1 && choice != 2)
		cin >> choice;
	switch (choice)

	{
	case 1:
		player = new PaladinPlayer();
		break;
	case 2:
		player = new MagePlayer();
		break;
	default:
		cout << "\nUnknown choice.\n";
		break;
	}
	return choice;
}

void Game::playerIntro()
{
	system("cls");
	cout << "You awake in the middle of the vast green wilderness." << endl;;
	getchar();
	cout << "Heavy raindrops drown your face in wet and filthy water." << endl;;
	getchar();
	cout << "Rubbing your eyes to clear up your vision, you notice three orcish creatures staring at you, stalking you." << endl;
	getchar();
}

void Game::playGame()
{
	mainMenu();
	characterCreationMenu();
	playerIntro();
	vector<Enemy*>::iterator iter;
	enemyList.push_back(new Enemy(RED_ORC));
	enemyList.push_back(new Enemy(GREEN_ORC));
	enemyList.push_back(new Enemy(BLUE_ORC));
	
	bool gameIsActive = true;
	while (gameIsActive)
	{
		system("cls");
		cout << "Your Health: " << player->getHealth();
		playerActionMenu();
		switch (playerActionMenu())
		{
		case 1: //Attack an Enemy
			cout << "\nChoose your target:" << endl;
			for (iter = enemyList.begin(); iter != enemyList.end(); ++iter)
				if ((*iter)->isAlive())
					cout << (*iter)->getName() << " . . ." << (*iter)->getHealth() << " Health" << endl;
			int target = 0;
			while (target<1 || target> enemyList.size() + 1)
			{
				cout << "\nPlease select a proper target.";
				cin >> target;
				//TODO: Create a template function that will accept both string and integer
			}
			player->attack(enemyList[target - 1]);
			cout << endl << enemyList[target - 1]->getName() << " takes " << player->getAtkDamage() << " damage.\n";
			break;
		case 2: //Cast a spell
			cout << "\nSelect a spell to cast:" << endl;
			int spellChoice=0;
			if (characterCreationMenu() == 1) //Paladin Class
			{
				for (int i = PaladinSpell::RIGHTEOUS_STRIKE; i <= PaladinSpell::SHIELD; i++)
					cout << i<<". "<<paladinSpell->getSpellName() << endl;
				while (spellChoice<PaladinSpell::RIGHTEOUS_STRIKE && spellChoice>PaladinSpell::SHIELD)
					cin >> spellChoice;
				paladinSpell->initializeSpell(player, enemy, static_cast<PaladinSpell::e_paladinSpells>(spellChoice));
			}
			else if (characterCreationMenu() == 2) //Mage Class
			{
				for (int i = 1; i <= MageSpell::FROSTBOLT ; i++)
					cout << i << ". " << mageSpell->getSpellName() << endl;
				while (spellChoice<MageSpell::FIREBALL && spellChoice>MageSpell::FROSTBOLT)
					cin >> spellChoice;
				mageSpell->initializeSpell(player, enemy, static_cast<MageSpell::e_mageSpells>(spellChoice));
			}
			if (!(enemyList[target - 1]->isAlive()))
			{
				cout << enemyList[target - 1]->getName() << " dies." << endl;

			}
			break;

		case 3: //Assume defensive position
			player->assumeDefPosition();
			break;
		}

		EnemyCombat();
	}
	
	/*
	Player* p1;
	Enemy* p2;
	Enemy* p3;
	Enemy* p4;
	string playerName;
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
		system("cls");
		cout << "Your Health: " << p1->getHealth();
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
				if ((*iter)->isAlive())
					cout << (*iter)->getName() << " . . ." << (*iter)->getHealth() << " Health" << endl;
			int target = 0;
			while (target<1 || target> enemies.size() + 1)
			{
				cout << "\nPlease select a proper target.";
				cin >> target;
				//TODO: Create a template function that will accept both string and integer
			}
			p1->attack(enemies[target - 1]);
			cout << endl << enemies[target - 1]->getName() << " takes " << p1->getAtkDamage() << " damage.\n";
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
	*/
}

int Game::playerActionMenu()
{
	cout << endl;
	cout << "Choose your move:" << endl
		<< "1.Attack" << endl
		<< "2.Cast a spell" << endl
		<< "3.Assume defensive position" << endl
		<< "4.Use Health potion" << endl
		<< "5.Use Mana potion" << endl;
	int choice = 0;
	while (choice < 1 && choice>5)
		cin >> choice;
	return choice;
}

void Game::EnemyCombat()
{
	cout << "Your health: " << player->getHealth() << endl;
	vector<Enemy*>::iterator iter;
	for (iter = enemyList.begin(); iter != enemyList.end(); ++iter)
	{
		if ((*iter)->isAlive())
		{
			cout << (*iter)->getName() << " attacks you for " << (*iter)->getAtkDamage() << " damage." << endl;
			(*iter)->attack(player);
		}
		cout << "Your Health: " << player->getHealth() << endl << endl;

	}
}
