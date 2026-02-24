#include<stdio.h>
#include<ncurses.h>

int main(int argv, char** argc){
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(1);

	if(!has_colors()){
		endwin();
		printf("Error: It seems your terminal emulator doesn't support colors.\n Recommended Emulators:\n\n - Kitty\n - Ghostty\n - KDE Terminal\n - Gnome Terminal\n");
	}

	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLUE);

	attron(COLOR_PAIR(1));

	int x, y;
	getmaxyx(stdscr, y, x);
	y = y * 0.5;
	x = (x * 0.5) - 6;

	mvwprintw(stdscr, y, x, "Hello World");
	mvwprintw(stdscr, 2, 2, "Hello World");
	refresh();

	attroff(COLOR_PAIR(1));

	getch();
	endwin();

	return 0;
}
