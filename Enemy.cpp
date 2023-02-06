#include "Enemy.h"

void Enemy::SetAlive(bool isAlive)
{
	isAlive_ = isAlive;
}

void Enemy::Print()
{
	if (isAlive_) { printf("生存\n"); }
	else { printf("消滅\n"); }
}