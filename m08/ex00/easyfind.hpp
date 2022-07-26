/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <mnaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:09:25 by mnaimi            #+#    #+#             */
/*   Updated: 2022/11/17 00:13:37 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASY_FIND_HPP_
#define EASY_FIND_HPP_

/* ************************************************************************** */
/* ****************************   INCLUDES   ******************************** */
/* ************************************************************************** */

#include <iostream>
#include <exception>

/* ************************************************************************** */
/* *****************************   CLASSES   ******************************** */
/* ************************************************************************** */

template <typename T>
void	easyFind(T const &container, int item)
{
	typename T::const_iterator it;
	it = std::find(container.cbegin(), container.cend(), item);
	if (it == container.cend())
		throw std::runtime_error("Element not found");
	std::cout << "Element found" << std::endl;
}

#endif
