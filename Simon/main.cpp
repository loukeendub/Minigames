#include "Simon.hpp"

static	bool playerSeq(Simon master)
{
	int	guess = 0;

	messageDialog("SEQUENCE");
	for (int i = 0; i < master.getSize(); ++i)
	{
		std::cin >> guess;
		if (!master.compareSeq(i, guess))
			return (false);
	}
	return (true);
}

static void	playGame(int startLev)
{
	Simon	master(startLev);

	bool	lose = false;
	int		currentLev = startLev;

	for (int i = 1; lose != true; i++)
	{
		statusDialog(currentLev, i);
		master.addSeq(currentLev);
		master.printSeq(currentLev);
		if (!playerSeq(master))
		{
			statusDialog(currentLev, i);
			lose = true;
		}
		currentLev++;
	}
}

int main()
{
	int	level;

	clearScreen();
	introDialog();
	level = selectLevel();

	messageDialog("READY");
	system("read");

	playGame(level);
	messageDialog("LOSE");
	return (0);
}
