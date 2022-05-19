#include "signal.h"
#include "stdio.h"
#include "unistd.h"

int	debug_on = 0;

void	toggle_debug_flag(int sig)
{
	debug_on ^= 1;
}

int	main(void)
{
	/* SIGINFO shortcut: ctrl + t */
	signal(SIGINFO, toggle_debug_flag);

	while (1)
	{
		sleep(1);
		/* if statement vor debug prints */
		if (debug_on)
			printf("test123\n");
	}
	return (0);
}