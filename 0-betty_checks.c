#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	char *command = NULL;
	size_t len = 0;

	char *argv[] = {"/bin/ls", NULL};

	while (1)
	{
		printf("$");
		getline(&command, &len, stdin);
		printf("%s", command);

		execve(argv[0], argv, NULL);
	}
	return 0;
}
