/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 19:28:44 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/22 19:42:13 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

class	Point
{
	public:
		Point();
		~Point();

		void	setX( int );
		void	setY( int );

		int		getX();
		int		getY();

		//bool	operator=(const Point) const;;

	private:
		int	_x;
		int	_y;
};
#endif
