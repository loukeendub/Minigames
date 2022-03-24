#ifndef LOCK_HPP
# define LOCK_HPP

#include "dialog.h"

typedef class Lock
{
	private:
		const int	combination[5];
		bool		locked;
	public:
		Lock(int lev);
		~Lock();

		const int	*getCombination();
		int			Sum();
		int			Product();
		bool		checkCombination(int *guess);
};

#endif