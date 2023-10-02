#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the functions fails or filename is NULL - -1.
 *         If the file does n't exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, ln);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
