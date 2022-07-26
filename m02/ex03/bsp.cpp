/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:09:25 by mnaimi            #+#    #+#             */
/*   Updated: 2022/10/07 20:08:34 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* ************************************************************************** */
/* *****************************  FUNCTIONS  ******************************** */
/* ************************************************************************** */

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int	turns = orient(a, b, point) + orient(b, c, point) + orient(c, a, point);
	if (abs(turns) == 3)
		return (true);
	return (false);
}
