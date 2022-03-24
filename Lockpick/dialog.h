#ifndef DIALOG_H
# define DIALOG_H

#include <iostream>

// IN GAME MESSAGES:
# define	MSG_LOCK(lev)		"# You have to open a Lev. " lev "lock:"
# define	MSG_UNLOCK(lev)		"+ You unlocked a Lev. " lev " lock."
# define	MSG_LIFELEFT(life)	"+ You have currently " life " lockpicks."
# define	MSG_LOSELIFE		"+ You entered the WRONG combination and lost one lockpick."
# define	MSG_WIN				"+ Congratulations! You Opened all the locks and entered The Vault!"
# define	MSG_FAIL			"+ You have failed too many times! Game Over!"

// ERROR MESSAGES:
# define	ERR_NEEDMOREARGS	"**ERROR: You entered less than 5 digits. Please try again.**"
# define	ERR_TOOMANYARGS		"**ERROR: You entered more than 5 digits. Please try again.**"

static void	IntroDialog()
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

static void	HintDialog(int sum, int prod)
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "+ The SUM of the 5 digits is " << sum << std::endl;
	std::cout << "+ The PRODUCT of the 5 digits is " << prod << std::endl;
	std::cout << "------------------------------------------" << std::endl;

	std::cout << "Please type in your guess for the combination:" << std::endl;
}

#endif