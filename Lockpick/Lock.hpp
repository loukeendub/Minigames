#ifndef LOCK_HPP
# define LOCK_HPP

#include "dialog.h"

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

#endif