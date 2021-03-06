#include <stdio.h>

void fmt(char *s, int n)
{
	static char t[65536];
	char *p;
	int i, j;

	while (*s) {
		for (p = t; *s != '\n'; s++)
			for (i = 0; i < n; i++) *p++ = *s;
		*p = '\0';

		for (i = 0; i < n; i++)
			printf("%s\n", t);

		s++;
	}

	printf("\n\n");
}

char htext[] =
	"*****..***..*...*.*****...*...*.*****.*****.***...*****.*...*\n"
	"*.....*...*.*...*.*.......*...*.*...*...*...*..*..*...*..*.*.\n"
	"*****.*****.*...*.***.....*****.*****...*...*...*.*...*...*..\n"
	"....*.*...*..*.*..*.......*...*.*.*.....*...*..*..*...*...*..\n"
	"*****.*...*...*...*****...*...*.*..**.*****.***...*****...*..\n";

char vtext[] =
	"*****\n*....\n*****\n....*\n*****\n.....\n.***.\n*...*\n*****\n"
	"*...*\n*...*\n.....\n*...*\n*...*\n*...*\n.*.*.\n..*..\n.....\n"
	"*****\n*....\n***..\n*....\n*****\n.....\n.....\n.....\n*...*\n"
	"*...*\n*****\n*...*\n*...*\n.....\n*****\n*...*\n*****\n*.*..\n"
	"*..**\n.....\n*****\n..*..\n..*..\n..*..\n*****\n.....\n***..\n"
	"*..*.\n*...*\n*..*.\n***..\n.....\n*****\n*...*\n*...*\n*...*\n"
	"*****\n.....\n*...*\n.*.*.\n..*..\n..*..\n..*..\n";

int main()
{
	int n;

	while (scanf("%d", &n) == 1 && n != 0)
		if (n > 0)
			fmt(htext, n);
		else
			fmt(vtext, -n);

	return 0;
}
