/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 19:35:55 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/22 19:41:47 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}

Point::~Point()
{}

void	Point::setX(int x)
{
	this->_x = x;
}

void	Point::setY(int y)
{
	this->_y = y;
}

int		Point::getX()
{
	return (this->_x);
}

int		Point::getY()
{
	return this->_y;
}
