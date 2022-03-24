#include <iostream>
#include <ctime>

void	printDialog(std::string str)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << str << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}

bool	isLocked(const int *src, int *guess)
{
	int	sOps[2] = {0, 1};
	int	gOps[2] = {0, 1};

	for (int i = 0; i < 5; i++)
	{
		sOps[0] += src[i];
		sOps[1] *= src[i];
		gOps[0] += guess[i];
		gOps[1] *= guess[i];
	}
	if (sOps[0] == gOps[0] && sOps[1] == gOps[1])
		return (false);
	return (true);
}

bool	lockpick(int dif, int lp)
{
	const int	_src[5];
	int			_guess[5];

	std::cout << "+ LOCK lev #" << dif << " |";
	for (int i = 0; i < lp; i++)
		std::cout << " *";
	std::endl;
	for (int i = 0; i < 5; i++)
	{
		_src[i] = rand() % dif + dif
		std::cout << "Enter digit #" << i << std::endl;
		std::cin >> _guess[i];
	}
	if (isLocked(_src, _guess))
		return (false);
	return (true);
}

int	main ()
{
	int	life = 3;

	printDialog("|    OPEN THE VAULT    |");
	printDialog("+ Locks have 5-digit combinations.");
	printDialog("+ There are 10 locks to open.");
	for (int dif = 0; dif < 10; dif++)
	{
		if (!lockpick(dif + 1, life))
		{
			if (!life)
			{
				printDialog("You Have Failed! Game Over!");
				return (0);
			}
			life--;
		}
		std::cin.clear();
		std::cin.ignore();
	}
	printDialog("Congratulations! You Opened The Vault!");
	return (0);
}