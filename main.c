#include "ft_printf.h"

int main()
{
    int r;
	// int r1;
    char *c = "abcdefgh13";
    char *s[10] = {"abcd\0", "1234\0", NULL, "", "abcd\0", "1234\0", "dfge\0", "dffg\0", "abcd\0", "1234\0"};
    int a[10] = {0, 2147483647, -2147483648, 3, -4, 5, -6, 7, -8, 9};
    unsigned int u[10] = {0, 2147483647, 4294967295, -3, 4, 5, 6, 7, 8, 9};
    int x[10] = {0, 2147483647, 429496729, -12, 4, -1000000, 6, 7, 8, 9};
	// int d = 17654367;
	// int d2 = 0;
	// char *s1 = "Hello_1";
	// char *s2 = NULL;

    //cspdiuxX%


    printf("\n");
    for(int i = 0; i < 10; i++)
    {
		printf("Итерация %d\n", i);
        r = ft_printf("My: bubble Gum |%c|\t|%s|\t|%p|\t|%d|\t|%i|\t|%u|\t|%x|\t|%X|\t|%%|\t", c[i], s[i], &s[i], a[i], a[i], u[i], x[i], x[i]);
        printf("res:%d\n", r);
        r = printf("Or: bubble Gum |%c|\t|%s|\t|%p|\t|%d|\t|%i|\t|%u|\t|%x|\t|%X|\t|%%|\t", c[i], s[i], &s[i], a[i], a[i], u[i], x[i], x[i]);
        printf("res:%d\n\n", r);
    }

	// printf("обработка %%ов\n");
    // r = ft_printf("My: bubble Gum |%%|\t|%%|\t|%  hjk|\t|%005|\t|%  0010|\t|%req|\t|% req|\t|%$$$d|\t|%$|\t");
    // printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%%|\t|%%|\t|%  hjk|\t|%005|\t|%  0010|\t|%req|\t|% req|\t|%$$$d|\t|%$|\t");
    // printf("res:%d\n\n", r);
	// r = ft_printf("My: bubble Gum |%%\t|%%|\t|%5|\t|%?()|\t|%.5|\t|%0.5|\t|%  0.5|\t|%{}|\t|%   %|\t");
    // printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%%|\t|%%|\t|%5|\t|%?()|\t|%.5|\t|%0.5|\t|%  0.5|\t|%{}|\t|%   %|\t");
    // printf("res:%d\n\n", r);

	// printf("обработка %%ов\n");
    // r = ft_printf("My: bubble Gum |%X|\t", -12);
    // printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%X|\t", -12);
    // printf("res:%d\n\n", r);

	//V---------- числа
	// printf("Числа\n\n");
    // r = ft_printf("My: bubble Gum |%-15.10d|\t|%15.10d|\t|%10.15d|\t|%5.15d|\t|%3.5d|\t", d, d, d, d, d);
	// r += ft_printf("|%5.3d|\t|%10d|\t|%010d|\t|%5d|\t|%.5d|\t|%.d|\n", d, d, d, d, d, d);
	// printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%-15.10d|\t|%15.10d|\t|%10.15d|\t|%5.15d|\t|%3.5d|\t", d, d, d, d, d);
	// r += printf("|%5.3d|\t|%10d|\t|%010d|\t|%5d|\t|%.5d|\t|%.d|\n", d, d, d, d, d, d);
	// printf("res:%d\n", r);
	// printf("Числа = 0\n\n");
    // r = ft_printf("My: bubble Gum |%-15.10d|\t|%15.10d|\t|%10.15d|\t|%5.15d|\t|%3.5d|\t", d2, d2, d2, d2, d2);
	// r += ft_printf("|%5.3d|\t|%10d|\t|%010d|\t|%5d|\t|%.5d|\t|%.d|\n", d2, d2, d2, d2, d2, d2);
	// printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%-15.10d|\t|%15.10d|\t|%10.15d|\t|%5.15d|\t|%3.5d|\t", d2, d2, d2, d2, d2);
	// r += printf("|%5.3d|\t|%10d|\t|%010d|\t|%5d|\t|%.5d|\t|%.d|\n", d2, d2, d2, d2, d2, d2);
	// printf("res:%d\n", r);

	//V---------- строки

	// printf("\nСтроки\n\n");
    // r = ft_printf("My: bubble Gum |%-15.10s|\t|%15.10s|\t|%10.15s|\t|%5.15s|\t|%3.5s|\t", s1, s1, s1, s1, s1);
	// r += ft_printf("|%5.3s|\t|%10s|\t|%5s|\t|%.5s|\t|%.s|\n", s1, s1, s1, s1, s1);
	// printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%-15.10s|\t|%15.10s|\t|%10.15s|\t|%5.15s|\t|%3.5s|\t", s1, s1, s1, s1, s1);
	// r += printf("|%5.3s|\t|%10s|\t|%5s|\t|%.5s|\t|%.s|\n", s1, s1, s1, s1, s1);
	// printf("res:%d\n", r);
	// printf("\nСтроки NULL\n\n");
	// r = ft_printf("My: bubble Gum |%-15.10s|\t|%15.10s|\t|%10.15s|\t|%5.15s|\t|%3.5s|\t", s2, s2, s2, s2, s2);
	// r += ft_printf("|%5.3s|\t|%10s|\t|%5s|\t|%.5s|\t|%.s|\n", s2, s2, s2, s2, s2);
	// printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%-15.10s|\t|%15.10s|\t|%10.15s|\t|%5.15s|\t|%3.5s|\t", s2, s2, s2, s2, s2);
	// r += printf("|%5.3s|\t|%10s|\t|%5s|\t|%.5s|\t|%.s|\n", s2, s2, s2, s2, s2);
	// printf("res:%d\n", r);

	//V---------- xX (попробуй большие)

	// printf("\nЧисла16x\n\n");
    // r = ft_printf("My: bubble Gum |%-15.10x|\t|%15.10x|\t|%10.15x|\t|%5.15x|\t|%3.5x|\t", d, d, d, d, d);
	// r += ft_printf("|%5.3x|\t|%10x|\t|%010x|\t|%5x|\t|%.5x|\t|%.x|\n", d, d, d, d, d, d);
	// printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%-15.10x|\t|%15.10x|\t|%10.15x|\t|%5.15x|\t|%3.5x|\t", d, d, d, d, d);
	// r += printf("|%5.3x|\t|%10x|\t|%010x|\t|%5x|\t|%.5x|\t|%.x|\n", d, d, d, d, d, d);
	// printf("res:%d\n", r);
	// printf("\nЧисла16x = 0\n\n");
    // r = ft_printf("My: bubble Gum |%-15.10x|\t|%15.10x|\t|%10.15x|\t|%5.15x|\t|%3.5x|\t", d2, d2, d2, d2, d2);
	// r += ft_printf("|%5.3x|\t|%10x|\t|%010x|\t|%5x|\t|%.5x|\t|%.x|\n", d2, d2, d2, d2, d2, d2);
	// printf("res:%d\n", r);
    // r = printf("Or: bubble Gum |%-15.10x|\t|%15.10x|\t|%10.15x|\t|%5.15x|\t|%3.5x|\t", d2, d2, d2, d2, d2);
	// r += printf("|%5.3x|\t|%10x|\t|%010x|\t|%5x|\t|%.5x|\t|%.x|\n", d2, d2, d2, d2, d2, d2);
	// printf("res:%d\n", r);


	//---------- указатели

	// printf("\nУказатели\n\n");
	// r = ft_printf("My: bubble Gum |%10p|\t|%015p|\t|%5p|\t|%.p|\n", s1, s1, s1, s1);
	// printf("res:%d\n", r);
	// r = ft_printf("Or: bubble Gum |%10p|\t|%015p|\t|%5p|\t|%.p|\n", s1, s1, s1, s1);
	// printf("res:%d\n", r);
	// printf("\nУказатели NULL\n\n");
	// r = ft_printf("My: bubble Gum |%10p|\t|%015p|\t|%5p|\t|%.p|\n", s2, s2, s2, s2);
	// printf("res:%d\n", r);
	// r = ft_printf("Or: bubble Gum |%10p|\t|%015p|\t|%5p|\t|%.p|\n", s2, s2, s2, s2);
	// printf("res:%d\n", r);


	return (0);
}
