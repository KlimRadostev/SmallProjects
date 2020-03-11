// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/08/13 18:49:06 by kradoste          #+#    #+#             //
//   Updated: 2019/08/14 01:30:43 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <stdio.h>
#include <string>

void	push_val(int val)
{
	std::cout << val << " pushed\n";
}

void	pop_val(int val)
{
	std::cout << val << " popped\n";
}

typedef	struct s_instructions
{
	std::string	*name;
	void	(*function)(int);
}		t_instructions;

t_instructions	g_instructions[] = 
{
	{new std::string("push"), &push_val},
	{new std::string("pop"), &pop_val},
	{new std::string(""), 0}
};

int main(int ac, char **argv)
{

	int val = 10;

//	char str[] = "push";
	int	x = -1;
//	std::string s(str);
//	std::cout << s << std::endl;

	std::string s(argv[1]);
	while (!g_instructions[++x].name->empty())
	{
		//std::string *s = new std::string(argv[1]);
		//if (!s.compare(*g_instructions[x].name))
		if (s == *g_instructions[x].name)
		{
			g_instructions[x].function(val);
			return (0);
		}
	}

	return (0);
}

//hash map to function pointers look up
