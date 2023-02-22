#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
        char *command = NULL;
        size_t len = 0;

        while (1)
        {
                printf("$");
                getline(&command, &len, stdin);

                execve(command, argv, NULL);
        }
        free(command);
        return (0);
}
