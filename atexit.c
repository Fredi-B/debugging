#include <stdlib.h>

/* put in here what you'd like to do
at the very end of your program
e.g.: check for leaks */
void	function(void)
{
	system("leaks a.out");
}

/* call atexit at the beginning of your program */
int	main(void)
{
	atexit(function);
	return (0);
}