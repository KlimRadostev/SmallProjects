// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test_switch.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/09/04 14:37:19 by kradoste          #+#    #+#             //
//   Updated: 2019/09/04 14:38:50 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main()
{
	int x = 3;

	switch(x)
	{
	case 0: std::cout << x << std::endl; break;
	case 1: std::cout << x << std::endl; break;
	case 2: std::cout << x << std::endl; break;
	case 3: std::cout << x << std::endl; break;
	}
	return (0);
}
