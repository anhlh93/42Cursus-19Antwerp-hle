#include "unistd.h"

int main(int argc, char **argv)
{
    int i;
    int j;
    int used[255] = {0};

    i = 1;
    if (argc == 3)
    {
        while (i <= 2)
        {
            j = 0;
            while (argv[i][j])
            {
                if (used[(unsigned char)argv[i][j]] == 0)
                {
                    write(1, &argv[i][j], 1);
                    used[(unsigned char)argv[i][j]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}