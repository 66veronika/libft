#include <unistd.h>

void	putchar(char *str)
{
	int	k;
	k = 0;

	while(str[k])
	{
		write (1, &str[k], 1);
		k++;
	}
}
void	reverse(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	if (!str)
		return ;
	j = 0;
	while (str[j])
	{
		j++;
	}
	j--;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	putchar(str);
}
int	main(void)
{
	char	str[] = "ahoj";
	reverse(str);
	return (0);

}