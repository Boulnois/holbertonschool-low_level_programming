#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
    {
	    printf("Error\n");
	    exit(98);
    }
    operation = get_op_func(argv[2]);
    if (operation == NULL)
    {
	    printf("Error\n");
	    exit(99);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);


    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
    {
            printf("Error\n");
            exit(100);
    }
    result = operation(a, b);
    printf("%d\n", result);
    return (0);
}
