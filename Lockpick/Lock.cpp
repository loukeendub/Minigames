#include "Lock.hpp"

Lock::Lock(int lev) : locked(true)
{
	// initialize combination based on player level
	for (int i = 0; i < 5; i++)
		combination[i] = rand() % lev + lev;
}

Lock::~Lock()
{}

int	*Lock::getCombination() const
{ return (combination); }

int	Lock::Sum()
{
	int sum = 0;

	// sum up digits from combination array and return the total result as an int value
	for (int i = 0; i < 5; i++)
		sum += combination[i];
	return (sum);
}

int	Lock::Product()
{
	int	prod = 1;
	// multiply digits from combination array and return the total result as an int value
	for (int i = 0; i < 5; i++)
		prod *= combination[i];
	return (prod);
}

bool	Lock::checkCombination(int *guess)
{
	int guessSum = 0;
	int	guessProd = 1;

	// check if guess is correct
	for (int i = 0; i < 5; i++)
	{
		guessSum	+= guess[i];
		guessProd	*= guess[i];
	}
	if (guessSum == Lock::Sum() && guessProd == Lock::Product())
		return (true);
	return (false);
}

void	Lock::setLock(bool locked)
{ this->locked = locked; }