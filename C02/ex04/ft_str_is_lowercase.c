#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		else if((str[i] >= 'a') != (str[i] <= 'z'))
			return (1);
		i++;
    }
	return(1);
}
int main(void)
{
	char *str ="vcd";
	printf("%d",ft_str_is_alpha(str));
	return (0);
}