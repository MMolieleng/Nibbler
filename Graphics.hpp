/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graphics.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 11:54:06 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/22 22:40:50 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICS_H
# define GRAPHICS_H
# include "IGame.hpp"
# include "Point.hpp"
# include "nibbler.hpp"

class	Graphics : public IGame
{
	public:
		Graphics();
		~Graphics();

		void	init();
		void	draw(Point *p);
		int		getInput();

	private:
		SDL_Window* window;
		SDL_Renderer* render;
	//	SDL_Surface* screenSurface;
};
#endif
