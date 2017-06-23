/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Snake.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:31:27 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/22 23:56:43 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Snake.hpp"

Snake::Snake()
{
	this->_size = 0;
	this->_point.setX( WIDTH / 2 );
	this->_point.setY( HEIGHT / 2 );
	this->_currentDirection = RIGHT;

	std::cout << this->_currentDirection << this->_size << std::endl;
}

Snake::~Snake()
{
	std::cout<< "Deleting Snake" << std::endl;
}

void	Snake::setDirection(int direction)
{
	std::cout<<direction<<std::endl;
}

int		Snake::getDirection() const
{
	return (this->_currentDirection);
}

Point	Snake::getPosition() const
{
//	Point *p = &this->_point;
	return (this->_point);
}

void	Snake::moveRight()
{
	this->_point.setX( this->_point.getX() + 1);
}
