/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:54:54 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/28 18:16:54 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef BASE_H
# define BASE_H

class Base
{
	public:

		virtual ~Base(void){};
};

class A: public Base{};

class B: public Base{};

class C: public Base{};

#endif