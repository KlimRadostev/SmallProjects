// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test_delimiter.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/09/04 02:51:07 by kradoste          #+#    #+#             //
//   Updated: 2019/09/04 03:00:11 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

int main()
{
	std::string	line = "Hello/.asdfasasdfdasdffasdf";
	std::string	delimiter = " ";
	line.erase(0, line.find(delimiter) + delimiter.length());
	delimiter = "(";

	std::string token = line.substr(0, line.find(delimiter));
	if (token == "asdf")
		std::cout << "found first asdf\n";

	line.erase(0, line.find(delimiter) + delimiter.length());
	delimiter = ")";

	token = line.substr(0, line.find(delimiter));
	if (token == "asdf")
		std::cout << "found second asdf\n";

	return (0);
}
