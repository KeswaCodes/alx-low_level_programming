#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main- simple shell by zinksw@gmail.com
 *Return: 1 - success
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{

  int stdin_check = 1, i, status, process;

  /*check if file descriptor refers to terminal*/
  for (i = 0; ; i++)
    {
      process = fork();
      if (process == 0)
	{
	  write(1, "Zinhle\n", 7);      
	}
      else if (process > 0)
	{
stdin_check = isatty(STDIN_FILENO);
      if (stdin_check == 1)
      write(STDOUT_FILENO, "$\n", 3);
      wait(&status);
      
	}
      else
	return (-1);
    }

  return (0);
}
