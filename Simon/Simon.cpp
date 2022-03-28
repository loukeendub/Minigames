#include "Simon.hpp"

Simon::Simon(int lev) :
_lev(lev)
{
	int	newNum = rand() % lev;
	_seq.push_back(newNum);
}

Simon::~Simon()
{}

void	Simon::addSeq(int range)
{
	int ran = rand();
	int	newNum = ran % range;

	_seq.push_back(newNum);
}

std::vector<int> 	Simon::getSeq()
{ return (_seq); }


/*	-	still some issues here to inhibit std::cin while displaying the sequence.
**		cin.ignore() works, but I need to ask player to press ENTER again before typing the sequence.
*/	  
void	Simon::printSeq(int lev)
{
	clearScreen();
	// std::cin.ignore(10000000, '\n');
	for (sequence_iterator it = _seq.begin(); it != _seq.end(); it++)
	{
		displayNum(*it);
		waitNext(lev);
		clearScreen();
		waitNext(lev);
	}
	// messageDialog("READY");
	// std::cin.get();
}

int	Simon::getSize() const
{
	return _seq.size();
}

bool Simon::compareSeq(int iter, int value) const
{
	if (_seq[iter] == value)
		return (true);
	return (false);
}

