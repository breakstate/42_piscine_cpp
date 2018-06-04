#include <iostream>

int main(int argc, char **argv) 
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc > 1)
    {
        while (++i < argc)
        {
            while (argv[i][j] != '\0')
            {
                std::cout << char(toupper(argv[i][j]));
                j++;
            }
            j = 0;
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << "\n";
    return 0;
}