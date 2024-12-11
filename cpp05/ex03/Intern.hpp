/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:40:35 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 18:03:31 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

//class AForm;

class Intern
{	
	public:
	
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern & operator=(Intern const & rhs);

		AForm * makeForm(std::string formName, std::string target);
};