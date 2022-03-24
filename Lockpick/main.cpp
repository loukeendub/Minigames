#include "Lock.hpp"

static bool	hasLife(int life)
{
	if (!life)
	{
		std::cout << MSG_FAIL << std::endl;
		return (false);
	}
	std::cout << MSG_LIFELEFT(life) << std::endl;
	return (true);
}

int	PlayGame(Lock *lock, int life);
{
	int	guess[5];

	HintDialog(Lock::Sum, Lock::Product);
	// execution of the game:
	for (int i = 0; i < 5; i++)
		std::cin >> guess[i];
	if (!Lock::CheckCombination(guess))
		life--;
	return (life);
}

int main()
{
	int	life = 3;

	IntroDialog();
	for (int lev = 1; lev < 10; lev++)
	{
		if (!hasLife)
			return (0);
		Lock	lock(lev);

		std::cout << MSG_LOCK(lev) << std::endl;
		life = PlayGame(&lock, life);
	}
	std::cout << MSG_WIN << std::endl;
	return (0);
}