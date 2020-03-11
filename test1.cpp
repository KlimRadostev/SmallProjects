//#include <iostream>
//#include <string>
#include <stdio.h>
#include <string.h>

void    push_val(int val)
{
	printf("%d pushed\n", val);
//	std::cout << val << " pushed\n";
}

void    pop_val(int val)
{
	printf("%d popped\n", val);
//	std::cout << val << " popped\n";
}

typedef struct s_instructions
{
	const char	*name;
    void    (*function)(int);
}       t_instructions;

t_instructions  g_instructions[] =
{
    {"push", &push_val},
    {"pop", &pop_val},
    {0, 0}
};

int main(int ac, char **argv)
{
	(void)ac;

    int val = 10;

//  char str[] = "push";
    int x = -1;
//  std::string s(str);
//  std::cout << s << std::endl;

//	std::string s(argv[1]);
    while (g_instructions[++x].name)
    {
		//printf("g_instructions[x].name = %s\n", g_instructions[x].name);
        //std::string *s = new std::string(argv[1]);
        //if (!s.compare(*g_instructions[x].name))
        if (!strcmp(argv[1], g_instructions[x].name))
        {
            g_instructions[x].function(val);
            return (0);
        }
    }
    return (0);
}
