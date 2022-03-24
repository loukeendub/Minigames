#include "Lock.hpp"

static bool	hasLife(int life)
{
	if (!life)
	{
		
		return (false);
	}
	MessageDialog("LIFELEFT");
	std::cout << life << std::endl;
	return (true);
}

int	PlayGame(Lock *lock, int life)
{
	int	guess[5];

	HintDialog(lock->Sum(), lock->Product());
	// execution of the game:
	for (int i = 0; i < 5; i++)
		std::cin >> guess[i];
	if (!lock->checkCombination(guess))
	{
		MessageDialog("LOSELIFE");
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

		MessageDialog("LOCK");
		std:: << lev << std::endl;

		res = PlayGame(&lock, life);

		if (res == life)
		{
			lock.setLock(false);
			MessageDialog("UNLOCK");
			std::cout << lev << std::endl;
		}
		else
			lev--;

		life = res;
	}
	MessageDialog("WIN");
	return (0);
}