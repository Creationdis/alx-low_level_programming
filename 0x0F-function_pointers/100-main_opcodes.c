#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 or 2 not correct
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_ptr = (char *) main;
for (i = 0; i < bytes; i++)
printf("%02x ", main_ptr[i] & 0xff);
printf("\n");

return (0);
}
