#include "exercises.h"
/**
* main - function that prints each directory contained in the the environment variable PATH, one directory per line.
*/
int main()
{
	extern char **environ;
	char *check;
	int i;
	//char *name = "USER=vagrant";
	int result;
	i = 0;
	while(environ[i] != NULL)
	{
		check = strtok(environ[i], "=");
		//result = strcmp(name, environ[i]);
		result = strcmp(name, check);
		if (result  == 0)
		{
			//printf("%s\n", environ[i]);
			check = strtok(NULL, "\0");
			return (check);
		}
		i++;
	}
	return (0);
}
