// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   etor.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/08/31 20:02:36 by kradoste          #+#    #+#             //
//   Updated: 2019/08/31 20:19:21 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ETOR_HPP
# define ETOR_HPP

#include "creator.hpp"

class Etor
{
private:
	Crea	x;

public:
	Etor() {}
	~Etor() {}

	int	dosomething()
		{
			return (x.createsInt());
		}
};

#endif
