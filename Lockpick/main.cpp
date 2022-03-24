#include "Lock.hpp"

static bool	hasLife(int life)
{
	if (!life)
	{
		
		return (false);
	}
	messageDialog("LIFELEFT");
	std::cout << life << std::endl;
	return (true);
}

int	playGame(Lock *lock, int life)
{
	int	guess[5];

	hintDialog(lock->Sum(), lock->Product());
	// execution of the game:
	for (int i = 0; i < 5; i++)
		std::cin >> guess[i];
	if (!lock->checkCombination(guess))
	{
		messageDialog("LOSELIFE");
		life--;
	}
	return (life);
}

int main()
{
	int	life = 3;
	int	res;

	introDialog();
	for (int lev = 1; lev < 10; lev++)
	{
		res = 0;
		if (!hasLife(life))
			return (0);

		Lock	lock(lev);

		//lock.printCombination(); //DEBUG

		messageDialog("LOCK");
		std::cout << lev << std::endl;

		res = playGame(&lock, life);

		if (res == life)
		{
			lock.setLock(false);
			messageDialog("UNLOCK");
			std::cout << lev << std::endl;
		}
		else
			lev--;

		life = res;
	}
	messageDialog("WIN");
	return (0);
}