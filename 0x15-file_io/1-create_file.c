#include "main.h"

 /**
  *create_file - function that creates a file with the given context
  * @filename: is the name of the file to create
  * @ is a NULL terminated string to write to the file
  * Returns: 1 on success, -1 on failure (file can not be created,
  * file can not be written, write “fails”, etc…)
  * The created file must have those permissions: rw-------.
  * If the file already exists, do not change the permissions.
  * if the file already exists, truncate it
  * if filename is NULL return -1
  */

int create_file(const char *filename, char *text_content)
{
	mode_t file_permissions;
	int file_descriptor;
	char *ptr;
	ssize_t bytes_written;
	ssize_t text_len = 0;

	if (filename == NULL)
		return (-1);
	file_permissions = S_IRUSR | S_IWUSR;
	file_descriptor = open(filename, O_WRONLY | O_CREAT
			| O_TRUNC, file_permissions);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		ptr = text_content;
		while (*ptr != '\0')
		{
			ptr++;
			text_len++;
		}
		bytes_written = write(file_descriptor, text_content, text_len);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
		close(file_descriptor);
		return (1);
	}
	close(file_descriptor);
	return (1);
}
