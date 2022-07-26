/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <mnaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 08:42:47 by mnaimi            #+#    #+#             */
/*   Updated: 2022/08/03 16:59:07 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/* -------------------------------------------------------------------------- */

Contact::Contact(void)
{
	std::cout << "Initializing empty contact ..." << std::endl;
	return;
}

/*  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  - */

Contact::~Contact(void)
{
	std::cout << "... destroying contact" << std::endl;
	return;
}

/* -------------------------------------------------------------------------- */

void Contact::clear_member(int index)
{
	if (index == 0)
		this->first_name.clear();
	else if (index == 1)
		this->last_name.clear();
	else if (index == 2)
		this->nickname.clear();
	else if (index == 3)
		this->phone_number.clear();
	else if (index == 4)
		this->darkest_secret.clear();
	return;
}

/* -------------------------------------------------------------------------- */

void Contact::set_member(std::string str, int index)
{
	clear_member(index);
	if (index == 0)
		this->first_name = str;
	else if (index == 1)
		this->last_name = str;
	else if (index == 2)
		this->nickname = str;
	else if (index == 3)
		this->phone_number = str;
	else if (index == 4)
		this->darkest_secret = str;
	return;
}

/* -------------------------------------------------------------------------- */

std::string Contact::get_member(int index)
{
	std::string	member;

	if (index == 0)
		member = first_name;
	else if (index == 1)
		member = last_name;
	else if (index == 2)
		member = nickname;
	else if (index == 3)
		member = phone_number;
	else if (index == 4)
		member = darkest_secret;
	return (member);
}
