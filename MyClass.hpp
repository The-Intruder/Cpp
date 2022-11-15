/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClass.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:09:25 by mnaimi            #+#    #+#             */
/*   Updated: 2022/11/01 18:31:09 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MYCLASS_HPP_
# define MYCLASS_HPP_

/* ************************************************************************** */
/* ****************************   INCLUDES   ******************************** */
/* ************************************************************************** */

# include ".hpp"
# include <>

/* ************************************************************************** */
/* *****************************   CLASSES   ******************************** */
/* ************************************************************************** */

class	MyClass
{
	public:
		MyClass( void );
		MyClass( MyClass const& );
		void operator = ( MyClass const& );
		~MyClass( void );
};

/* ************************************************************************** */
/* ****************************   PROTOTYPES   ****************************** */
/* ************************************************************************** */


#endif