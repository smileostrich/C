#include <stdio.h>
#include <limits.h>

int main(void)
{
	char ch_a = 'a';
	char ch_b = ch_a + 1;
	char ch_c = 99;
	char sign_test = 255;
	char char_size = CHAR_BIT;
	/*printf("a=%d,\nb=%d,\nc=%d\n" , ch_a, ch_b, ch_c);*/
	printf("char size is %c .\n", char_size);
	printf("sign_test is %d", sign_test);
	return 0;
}



