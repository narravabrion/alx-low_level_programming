#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int no, nt, nz;

for (nz = '0'; nz <= '7'; nz++)
{
for (no = nz + 1; no <= '9'; no++)
{
for (nt = no + 1; nt <= '9'; nt++)
{
putchar(nz);
putchar(no);
putchar(nt);
if (nz < '7' || no < '8' || nt < '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
