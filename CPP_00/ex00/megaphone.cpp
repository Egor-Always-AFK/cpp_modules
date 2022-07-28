#include <iostream>
#include <ctype.h>

int	ft_toupper(int c)
{	
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	return (c);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        int i = 1;
        while (i < argc)
        {
            int j = 0;
            while (argv[i][j])
            {
                std::cout << (char)ft_toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << "\n";
    }
    return (0);
}