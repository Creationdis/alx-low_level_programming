#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int n, bytes;
char *main_ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}

main_ptr = (char *) main;
for (n = 0; n < bytes; n++)
printf("%02x ", main_ptr[n] & 0xff);
printf("\n");

return (0);
}

