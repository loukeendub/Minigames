#include "Simon.hpp"

//  + intro ;
void	introDialog()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "|               SIMON SAYS               |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "RULES:" << std::endl;
	std::cout << "+ The goal of this game is to test your memory." << std::endl;
	std::cout << "+ First of all, you will be asked to set the" << std::endl;
	std::cout << "	game initial SPEED. This value is increased" << std::endl;
	std::cout << "	every time you pass a level." << std::endl;
	std::cout << "+ A numeric sequence will appear on screen." << std::endl;
	std::cout << "+ You have to retype the sequence" << std::endl;
	std::cout << "	one digit at the time and then press ENTER." << std::endl;
	std::cout << "+ if you enter the correct sequence," << std::endl;
	std::cout << "	a digit will be added up to the sequence." << std::endl;
	std::cout << "+ repeat the operation as many times as you can." << std::endl;
	std::cout << "+ when you lose, your score will appear." << std::endl << std::endl;

	messageDialog("READY");
	system("read");
}

//  + ask preferred start level (if blank start at lev 1) ;
int	selectLevel()
{
	int	lev = 1;

	std::cout << "Please enter your STARTING SPEED LEVEL:" << std::endl;
	std::cin >> lev;
	if (lev > 1)
		return (lev);
	else
		return (1);
}

//	+ display number
void	displayNum(int num)
{ std::cout << "[" << num << "]" << std::endl; }

//	+ dialog messages
void	messageDialog(std::string type)
{
//	- "SEQUENCE"	: ask sequence to player
	if (type == "SEQUENCE")
	{
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "Please enter the SEQUENCE:" << std::endl;
	}
//	- "LOSE"	: lose dialog
	else if (type == "LOSE")
	{
		std::cout << "	(T_T) Game Over! (T_T)" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}
	else if (type == "READY")
	{
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "	Press ENTER to continue..." << std::endl;
	}
}

//	- "STATUS"	: display current level and cleared levels amount.
void	statusDialog(int level, int cleared)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "| Speed: " << level << "	|	Max Sequence: " << cleared << " |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}

//	+ clear screen
void	clearScreen()
{
  	#if defined(_WIN32) //if windows
 	   system("cls");

	#else
    	system("clear");    //if other
	#endif  //finish
}

//	+ set waiting time between Master seq display
void	waitNext(int lev)
{
	useconds_t	waitFactor;
	useconds_t	max = 50;
	
	//increase speed while level increases
	//	-100 log(x) + 1000
	waitFactor = -100 * log(lev) + 1000;
	if (waitFactor < max)
		waitFactor = max;
	usleep(waitFactor * 1000);
}
