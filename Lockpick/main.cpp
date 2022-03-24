#include "Lock.hpp"

static bool	hasLife(int life)
{
	if (!life)
	{
		std::cout << MSG_FAIL.c_str() << std::endl;
		return (false);
	}
	std::cout << MSG_LIFELEFT.c_str();
	std::cout << life << std::endl;
	return (true);
}

int	PlayGame(Lock *lock, int life)
{
	int	guess[5];

	HintDialog(Lock::Sum, Lock::Product);
	// execution of the game:
	for (int i = 0; i < 5; i++)
		std::cin >> guess[i];
	if (!Lock::CheckCombination(guess))
	{
		std::cout << MSG_LOSELIFE.c_str() << std::endl;
		life--;
	}
	return (life);
}

int main()
{
	int	life = 3;
	int	res;

	IntroDialog();
	for (int lev = 1; lev < 10; lev++)
	{
		res = 0;
		if (!hasLife(life))
			return (0);
		Lock	lock(lev);

		std::cout << MSG_LOCK.c_str();
		std::cout << lev << std::endl;

		res = PlayGame(&lock, life);

		if (res == life)
		{
			lock.setLock(false);
			std::cout << MSG_UNLOCK.c_str();
			std::cout << lev << std::endl;
		}
		else
			lev--;

		life = res;
	}
	std::cout << MSG_WIN.c_str() << std::endl;
	return (0);
}