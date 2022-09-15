#include <stdio.h>

<<<<<<< HEAD


/**
 *
 * * main - Entry point
 *
 * *
 *
 * * Return: Always 0 (Success)
 *
 * */

int main(void)

{

		int a;

			int b;



				for (a = 48; a <= 56; a++)

						{

									for (b = a + 1; b <= 57; b++)

												{

																putchar(a);

																			putchar(b);

																						if (a != 56 || b != 57)

																										{

																															putchar(44);

																																			putchar(32);

																																						}

																								}



										}

					putchar(10);

						return (0);



=======
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
>>>>>>> 3f1a22fcd68c252f8d1c7b4255d85844b5b0ba23
}
