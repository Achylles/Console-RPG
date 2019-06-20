#include "pch.h"
#include "PaladinPlayer.h"



PaladinPlayer::~PaladinPlayer()
{
}

int PaladinPlayer::heal(int amount)
{
	m_health += amount;
	return amount;
}
