#include "Simon.hpp"

static void	playGame(int startLev)
{
	Simon	master(startLev, true);

	bool	lose = false;
	int		currentLev = startLev;

	for (int i = 0; lose; i++)
	{
		currentLev += i;
		statusDialog(currentLev, i);
		master.addSeq(currentLev);
		master.printSeq(&master, currentLev);
	}

}

int main()
{
	int	level = 0;

	introDialog();
	level = selectLevel();

	playGame(level);
	messageDialog("LOSE");
	return (0);
}
