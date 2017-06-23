/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graphics.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 12:10:42 by mmoliele          #+#    #+#             */
/*   Updated: 2017/06/22 23:53:48 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graphics.hpp"
#include <SDL2/SDL.h>
Graphics::Graphics()
{
	SDL_Init(SDL_INIT_VIDEO);
	this->window = SDL_CreateWindow("Snake", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, HEIGHT, WIDTH, SDL_WINDOW_SHOWN);
	this->render = NULL;

	if (this->window == NULL)
		std::cout << "Unable to create a window" <<std::endl;

	render = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(this->render, 68, 208, 14, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(this->render);

	std::cout << "Constructing SDL UI" <<std::endl;
}

void	Graphics::init()
{	
	//std::cout<< "Initializaion "<<std::endl;
}

void	Graphics::draw( Point *p )
{
	SDL_Rect spot;
	//	SDL_RenderClear(this->render);

	spot.x = p->getX();
	spot.y = p->getY();
	spot.w = POINT_SIZE;
	spot.h = POINT_SIZE;

	SDL_SetRenderDrawColor(this->render, 255, 87, 51, SDL_ALPHA_OPAQUE);

	//SDL_SetRenderDrawColor( this->render, 0, 0, 255, 255 );
	//Render Rectangle | Spot
	SDL_RenderFillRect(this->render, &spot);

	SDL_RenderPresent(this->render);
	
	//std::cout<< "Drawing Interface Update"<< std::endl;

/*	SDL_SetRenderDrawColor(this->render, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_RenderDrawLine(this->render, 320, 200, 300, 240);
	SDL_RenderDrawLine(this->render, 300, 240, 340, 240);
	SDL_RenderDrawLine(this->render, 340, 240, 320, 200);
	SDL_RenderPresent(this->render);
*/
	//SDL_SetRenderDrawColor(this->render, 0, 0, 0, SDL_ALPHA_OPAQUE);
	
	SDL_SetRenderDrawColor(this->render, 69, 146, 40, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(this->render);
}

int	Graphics::getInput()
{
	SDL_Event	event;
	SDL_PollEvent(&event);

	if (event.type == SDL_KEYDOWN)
	{
		switch(event.key.keysym.sym)
		{
			case SDLK_RIGHT:
				std::cout <<"RIGHT\n"<< std::endl;
				return (1);
				break;
			case SDLK_LEFT:
				return (2);
				std::cout <<"LEFT\n"<< std::endl;
				break;
			case SDLK_DOWN:
				std::cout <<"DOWN\n"<< std::endl;
				return (3);
				break;
			case SDLK_UP:
				std::cout <<"UP\n" << std::endl;
				return (4);
				break;
			case SDLK_1:
				std::cout <<"ONE\n" << std::endl;
				return (5);
				break;
			case SDLK_2:
				std::cout<< "TWO\n" << std::endl;
				return (6);
				break;
			case SDLK_3:
				std::cout<< "THREE\n" << std::endl;
				return (7);
				break;
			case SDLK_q:
				std::cout<< "QUIT\n" << std::endl;
				return -1;
			case SDLK_ESCAPE:
				std::cout << "Quit Escape " << std::endl;
				return -1;
				break;
			default:
				return 0;
				break;
		}
	}
	return (7);
}

Graphics::~Graphics()
{
	// Close and destroy the window
	SDL_DestroyWindow(window);

	window = NULL;
	//Clean up
	SDL_Quit();
}
