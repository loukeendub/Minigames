#include "Lock.hpp"

void	introDialog()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "|             OPEN THE VAULT             |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "RULES:" << std::endl;
	std::cout << "+ There are 9 locks to open." << std::endl;
	std::cout << "+ Locks have 5-digit combinations." << std::endl;
	std::cout << "+ To enter your guess type a number" << std::endl;
	std::cout << "	0 <= n <= 9 and press Enter." << std::endl;
	std::cout << "+ Repeat 5 times to set all values." << std::endl;
	std::cout << "+ You will base your guess upon the sum" << std::endl;
	std::cout << "  and the product between the Lock digits." << std::endl;
}

void	hintDialog(int sum, int prod)
{
	std::cout << std::endl << "------------------------------------------" << std::endl;
	std::cout << "+ The SUM of the 5 digits is " << sum << std::endl;
	std::cout << "+ The PRODUCT of the 5 digits is " << prod << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	std::cout << "Please type in your guess for the combination:" << std::endl;
}

static int	dialogList(std::string type)
{
	std::string	list[6] = {"LOCK", "UNLOCK", "LIFELEFT", "LOSELIFE", "WIN", "LOSE"};
	int			msg = 1;

	for (int i = 0; type != list[i]; i++)
		msg++;
	return (msg);
}

void	messageDialog(std::string type)
{
	std::cout << "------------------------------------------" << std::endl;
	switch (dialogList(type))
	{
		case 1:
			std::cout << "# You have to open a lock of Lev. ";
			break;
		case 2:
			std::cout << "+ You unlocked a lock of Lev. ";
			break;
		case 3:
			std::cout << "+ Lockpicks remaining: ";
			break;
		case 4:
			std::cout << "+ You entered the WRONG combination and lost one lockpick." << std::endl;
			break;
		case 5:
			std::cout << "+ Congratulations! You Opened all the locks and entered The Vault!" << std::endl;
			break;
		case 6:
			std::cout << "+ You have failed too many times! Game Over!" << std::endl;
			break;

		default:
			break;
	}
}
