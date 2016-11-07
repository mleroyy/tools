#include <stdio.h>
#include <curses.h>
#include <unistd.h>

#define color(p) printf("\033[%dm", p)
#define RED 31
#define GRE 32
#define MAG 35
#define WHI 37
#define BLU 34
#define YEL 33

int		main(void)
{
	int		b;

	printf("\033[H\033[2J");
	color(GRE);
	printf("            ___                                        \n");
	printf("           /\\_ \\                                       \n");
	printf("  ___ ___  \\//\\ \\       __     _ __    ___    __  __    \n");
	printf("/\' __` __`\\  \\ \\ \\    /\'__`\\ /\\`\\\'__\\ / __`\\ /\\ \\/\\ \\   \n");
	printf("/\\ \\/\\ \\/\\ \\  \\_\\ \\_ /\\  __/ \\ \\ \\/  /\\ \\L\\ \\\\ \\ \\_\\ \\  \n");
	printf("\\ \\_\\ \\_\\ \\_\\ /\\____\\\\ \\____\\ \\ \\_\\  \\ \\____/ \\/`____ \\ \n");
	printf(" \\/_/\\/_/\\/_/ \\/____/ \\/____/  \\/_/   \\/___/   `/___/> \\\n");
	printf("                  CORRECTION DE LA LIBFT            /\\___/\n");
	printf("                                                    \\/__/ \n\n");
	sleep(1);
	color(BLU);
	printf("          >>> Press ENTER to start correction <<<          \n");
	while (getchar() != '\n');
	color(RED);
	printf("\n------------------------ ft_memset ------------------------\n");
	color(YEL);
	printf("\n               >>> Press ENTER to continue <<<             \n");
	while (getchar() != '\n');
	color(RED);
	printf("\n------------------------ ft_bzero -------------------------\n");
	color(YEL);
	printf("\n               >>> Press ENTER to continue <<<             \n");
	while (getchar() != '\n');
	color(RED);
	printf("\n------------------------ ft_memcpy ------------------------\n");
	color(YEL);
	printf("\n               >>> Press ENTER to continue <<<             \n");
	while (getchar() != '\n');
	color(RED);
	printf("\n------------------------ ft_memccpy -----------------------\n");
	color(YEL);
	printf("\n               >>> Press ENTER to continue <<<             \n");
	while (getchar() != '\n');
	return (0);
} 
