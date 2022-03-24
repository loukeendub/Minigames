#include "Lock.hpp"

void	IntroDialog()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "|             OPEN THE VAULT             |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "RULES:" << std::endl;
	std::cout << "+ There are 9 locks to open." << std::endl;
	std::cout << "+ Locks have 5-digit combinations." << std::endl;
	std::cout << "+ You will base your guess upon the sum" << std::endl;
	std::cout << "  and the product between the Lock digits." << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}

void	HintDialog(int sum, int prod)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "+ The SUM of the 5 digits is " << sum << std::endl;
	std::cout << "+ The PRODUCT of the 5 digits is " << prod << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	std::cout << "Please type in your guess for the combination:" << std::endl;
}

void	MessageDialog(std::string type)
{
	std::cout << "------------------------------------------" << std::endl;
	switch (type)
	{
		case "LOCK":
			std::cout << "# You have to open a lock of Lev. ";
			break;
		case "UNLOCK":
			std::cout << "+ You unlocked a lock of Lev. ";
			break;
		case "LIFELEFT":
			std::cout << "+ Lockpicks remaining: ";
			break;
		case "LOSELIFE":
			std::cout << "+ You entered the WRONG combination and lost one lockpick." << std::endl;
			break;
		case "WIN":
			std::cout << "+ Congratulations! You Opened all the locks and entered The Vault!" << std::endl;
			break;
		case "LOSE":
			std::cout << "+ You have failed too many times! Game Over!" << std::endl;
			break;

		default:
			break;
	}
	std::cout << "------------------------------------------" << std::endl;
}

#endif