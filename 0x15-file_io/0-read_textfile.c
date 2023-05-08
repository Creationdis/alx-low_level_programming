#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: the number of letters to be printed
 *
 * Return: 1 for success 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters) 
{
if (filename == NULL) 
{
return (0);
}

int fd = open(filename, O_RDONLY);
if (fd == -1) 
{
return (0);
}

char *buffer = malloc(letters);
if (buffer == NULL) 
{
close(fd);
return (0);
}

ssize_t num_bytes_read = read(fd, buffer, letters);
if (num_bytes_read == -1) 
{
free(buffer);
close(fd);
return(0);
}

ssize_t num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (num_bytes_written);
}

