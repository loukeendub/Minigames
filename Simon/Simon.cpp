#include "Simon.hpp"

Simon::Simon(int lev, bool master) :
_lev(lev)
{
	int	newNum = rand() % lev;

	if (master)
		_seq.push_back(newNum);
}

Simon::~Simon()
{}

void	Simon::addSeq(int range)
{
	int	newNum = rand() % range;

	_seq.push_back(newNum);
}

void	Simon::printSeq(Simon *simon, int lev) const
{
	for (std::vector<int *>::iterator it = _seq.begin(); it != _seq.end(); it++ )
	{
		clearScreen();
		displayNum(*it);
		waitNext(lev);
	}
}
