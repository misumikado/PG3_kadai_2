#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::pFuncTable[])() =
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::GetAway
};

Enemy::Enemy()
{
	phase_ = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Approach()
{
	printf("近接\n");
}

void Enemy::Shoot()
{
	printf("射撃\n");
}

void Enemy::GetAway()
{
	printf("離脱\n");
}

void Enemy::Update()
{
	printf("phase_ : %d\n", phase_);

	(this->*pFuncTable[phase_])();

	phase_++;

	if (phase_ == 3)
	{
		phase_ = 0;
	}
}

void Enemy::Draw()
{
	printf("(enemy draw)\n");
}