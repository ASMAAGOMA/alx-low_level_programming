#include <stdio.h>
/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
printf("Size of a char: %ln byte(s)", sizeof(char));
printf("Size of an int: %ln byte(s)", sizeof(int));
printf("Size of a long int: %ln byte(s)", sizeof(long int));
printf("Size of a long long int: %ln byte(s)", sizeof(long long int));
printf("Size of a float: %ln byte(s)", sizeof(float));
return (0);
}
