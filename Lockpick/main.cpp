#include "Lock.hpp"

static bool	hasLife(int life)
{
	if (!life)
	{
		std::cout << "+ You have failed too many times! Game Over!" << std::endl;
		return (false);
	}
	std::cout << "+ Lockpicks remaining: ";
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
	if (!Lock::checkCombination(guess))
	{
		std::cout << "+ You entered the WRONG combination and lost one lockpick." << std::endl;
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

		std::cout << "# You have to open a lock of Lev. ";
		std::cout << lev << std::endl;

		res = PlayGame(&lock, life);

		if (res == life)
		{
			lock.setLock(false);
			std::cout << "+ You unlocked a lock of Lev. ";
			std::cout << lev << std::endl;
		}
		else
			lev--;

		life = res;
	}
	std::cout << "+ Congratulations! You Opened all the locks and entered The Vault!" << std::endl;
	return (0);
}