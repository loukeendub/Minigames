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

int	PlayGame(Lock *lock)
{
	int	guess[5];

	HintDialog(Lock::Sum, Lock::Product);
}

int main()
{
	int	life = 3;

	IntroDialog();
	for (int dif = 1; dif < 10; dif++)
	{
		if (!hasLife)
			return (0);
	
		Lock	lock(dif);
		life = PlayGame(&lock);
	}
	std::cout << MSG_WIN << std::endl;
	return (0);
}