/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 11:11:35 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/23 00:01:58 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graphics.hpp"
#include "Snake.hpp"
#include <math.h>
#include <SDL2/SDL.h>

int	main( void )
{
	bool quit = false;
	Snake *snake = new Snake();
	std::cout<< snake->getDirection() <<std::endl;
	IGame *game = new Graphics();

	Point point = snake->getPosition();
	game->draw( &point );

	while (!quit)
	{
	//	game->init();
		point = snake->getPosition();
		game->draw( &point );
		int input = game->getInput();
		if (input == -1){
			quit = true;
		}
		snake->moveRight();
		SDL_Delay(50);
	}
	return (0);
}
