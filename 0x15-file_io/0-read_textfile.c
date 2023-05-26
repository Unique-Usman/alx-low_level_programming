#include "main.h"
/**
 * read_textfile - read a text file
 * @filename: name of file
 * @letters: number of character to read;
 * Return: the number of characted written else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[letters];
	ssize_t op, rd, wri;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wri = read(STDOUT_FILENO, buffer, rd)

	if (op == -1 || rd == -1 || wri == -1 || wri != r)
		return (0);
	close(op);

	return (wri);
}
