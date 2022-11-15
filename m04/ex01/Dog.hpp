/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:09:25 by mnaimi            #+#    #+#             */
/*   Updated: 2022/10/07 20:08:34 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP_
# define DOG_HPP_

/* ************************************************************************** */
/* ****************************   INCLUDES   ******************************** */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

/* ************************************************************************** */
/* *****************************   CLASSES   ******************************** */
/* ************************************************************************** */

class Dog: public Animal
{
	private:
		Brain *m_brain;

	public:
		Dog( void );
		Dog( Dog const& );
		using Animal::operator=;
		void operator = ( Dog const& );
		~Dog( void );

		const Brain			&getBrain( void ) const;
		const std::string	*getIdeas( void ) const;
		void				setIdeas( size_t index, std::string idea );
		void				printIdeas( void ) const;

		void 				makeSound( void ) const;
};

/* ************************************************************************** */
/* ****************************   PROTOTYPES   ****************************** */
/* ************************************************************************** */

#endif