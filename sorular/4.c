// Writed by rtosun

#include <stdio.h>

int	main(void)
{
	char	dizi[] = "can";
	char	*asd;

	asd = dizi;
	*asd = 'q';
	asd++;
	asd[1] = (char) 'e';
	strchr(asd, 'q');
	printf("%s", dizi);
}
