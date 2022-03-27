#include "Simon.hpp"

//  + intro ;
void	introDialog()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "|               SIMON SAYS               |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "RULES:" << std::endl;
	std::cout << "[enter rules here]" << std::endl;
}

//  + ask preferred start level (if blank start at lev 1) ;
int	selectLevel()
{
	int	lev = 1;

	std::cout << "Please enter your STARTING LEVEL:" << std::endl;
	std::cin >> lev;
	return (lev);
}

//	+ display number
void	displayNum(int num)
{
	std::cout << "---" << std::endl;
	std::cout << "|" << num << "|" std::endl;
	std::cout << "---" << std::endl;
}

//	+ dialog messages
void	messageDialog(std::string type)
{  
	std::cout << "------------------------------------------" << std::endl;
//	- "SEQUENCE"	: ask sequence to player
	if (type == "SEQUENCE")
		std::cout << "Please enter the SEQUENCE:" << std::endl;
//	- "LOSE"	: lose dialog
	else if (type == "LOSE")
	{
		std::cout << "(T_T) Game Over! (T_T)" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}
}

//	- "STATUS"	: display current level and cleared levels amount.
void	statusDialog(int level, int cleared)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "| Level: " << level << " | Cleared: " << cleared << " |" << std::endl;
	std::cout << "------------------------------------------" << std::endl << std::endl;
}

//	+ clear screen
void	clearScreen()
{
  	if (!cur_term)
	{
		int result;
		setupterm(NULL, STDOUT_FILENO, &result);
		if (result <= 0) return;
	}

	putp(tigetstr( "clear" ));
}

//	+ set waiting time between Master seq display
void	waitNext(int lev)
{
	useconds_t	waitFactor = 1000;
	// TODO: increase speed while level increases
	usleep(waitFactor);
}
