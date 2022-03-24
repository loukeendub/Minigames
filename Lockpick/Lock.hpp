#ifndef LOCK_HPP
# define LOCK_HPP

#include <iostream>
#include <string>

class Lock
{
	private:
		int		combination[5];
		bool	locked;
	public:
		Lock(int lev);
		~Lock();

		int			Sum();
		int			Product();
		bool		checkCombination(int *guess);
		void		setLock(bool locked);
};

void	IntroDialog();
void	HintDialog(int sum, int prod);
void	MessageDialog(std::string type);

#endif