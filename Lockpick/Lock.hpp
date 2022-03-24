#ifndef LOCK_HPP
# define LOCK_HPP

#include <iostream>
#include <string>

class Lock
{
	private:
		int		combination[3];
		bool	locked;
	public:
		Lock(int lev);
		~Lock();

		int			Sum();
		int			Product();
		bool		checkCombination(int *guess);
		void		setLock(bool locked);

		void		printCombination() const;
};

void	introDialog();
void	hintDialog(int sum, int prod);
void	messageDialog(std::string type);

#endif