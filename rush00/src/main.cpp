#include "Player.hpp"
#include <ncurses.h>

int	main()
{
	Player player;

	int	quit = 0;
	int	scrX = 0;
	int	scrY = 0;
	int	ch = 0;

	// init ncurses
	initscr();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(FALSE);
	raw();
	getmaxyx(stdscr, scrY, scrX);
	
	// game loop
	while (!quit){
		clear();
		box( stdscr, 0, 0);
		mvprintw(player.y, player.x, ">");
		refresh();
		ch = getch();
		switch (ch) {
			case KEY_LEFT:
				player.x -= 4;
				break;
			case KEY_RIGHT:
				player.x++;
				break;
			case KEY_UP:
				player.y--;
				break;
			case KEY_DOWN:
				player.y++;
				break;
			case 'q':
				quit = 1;
				break;
		}
	}
	endwin();
	return (0);
}