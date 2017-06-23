#ifndef IGAME_H
# define IGAME_H
#include "Point.hpp"
class	IGame
{
	public:
		virtual	void	init() = 0;
		virtual void	draw(Point *p) = 0;
		virtual	int		getInput() = 0;
};

#endif
