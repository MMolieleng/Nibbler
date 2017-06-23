/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Snake.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:17:09 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/23 00:59:37 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SNAKE_H
# define SNAKE_H
# include <vector>
# include <iostream>
# include "nibbler.hpp"
# include "Point.hpp"

#define SNAKE_SEGMENT_SIZE  10;
#define INITIAL_SNAKE_SIZE  5;
#define GAME_SPEED	50

enum Direction {UP, DOWN, LEFT, RIGHT};

class	Snake
{
	public:
		Snake();
		~Snake();
		void	moveRight();
		void	setDirection(int);
		int		getDirection() const;
		Point	getPosition() const;

	private:
		int	_size;
		Direction _currentDirection;
		Point	 _point;
		std::vector<Point> _snake;
		std::vector<Point> _spot;
};

#endif
