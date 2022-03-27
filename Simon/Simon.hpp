#ifndef SIMON_HPP
# define SIMON_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <term.h>

class Simon
{
	typedef std::vector<int *>::iterator	sequence_iterator;

	private:
		int					_lev;
		std::vector<int *>	_seq;

	public:
		Simon(int lev, bool master);
		~Simon();

		void	addSeq(int range);
		void	printSeq(std::vector<int *> seq, int lev) const;
};

// DIALOG :
void	introDialog();
int		selectLevel();
void	displayNum(int num);
void	messageDialog(std::string type);
void	statusDialog(int level, int cleared);
void	clearScreen();
void	waitNext(int lev);

#endif