/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 19:13:45 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/15 15:06:42 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/*VERGEET NIET DEZE FILE TE VERWIJDEREN VOORDAT JE PUSHT*/

// void	cccc(unsigned int i, unsigned int j)
// {
// 	j = j + 4;
// 	i++;
// }

void	aaaaa(unsigned int i, char *c)
{
	*c = *c + 4;
	i++;
}

void	ont_aaaaa(unsigned int i, char *c)
{
	*c = *c - 4;
	i++;
}

char	bbbbb(unsigned int i, char c)
{
	return (c + i);
}

/*test bzero to see if it actually does anything*/

void	helpmesee(char *help, int n)
{
	int	i;

	i = 0;
	{
		while (i < n)
		{
			if (help[i] == '\0')
			{
				write(1, "0", 1);
			}
			else
			{
				write(1, &help[i], 1);
			}
			i++;
		}
	}
}

// void	delete(void *content)
// {
// 	content = 0;
// 	printf("%i",content);
// }

void	printlist(t_list *head)
{
	t_list	*temp;
	temp = head;

	while (temp != NULL)
	{
		printf("%i ", *(int *)temp->content);
		temp = temp->next;
	}
	printf("NULL\n");
}
	
int	main(void)
{
	printf("%s\n", ("Test is al num"));
	printf("%i\n", ft_isalnum(';'));
	printf("%i\n", isalnum(';'));
	printf("----------------------------");
	printf("\n%s\n", ("Test is al alpha"));
	printf("%i\n", ft_isalpha('f'));
	printf("%i\n", isalpha('f'));
	printf("----------------------------");
	printf("\n%s\n", ("Test is digit"));
	printf("%i\n", ft_isdigit('9'));
	printf("%i\n", isdigit('2'));
	printf("----------------------------");
	printf("\n%s\n", ("Test is ascii nonzero if true, 0 if false"));
	printf("%i\n", ft_isascii('h'));
	printf("%i\n", isascii('h'));
	printf("----------------------------");
	printf("\n%s\n", ("Test is printable with space nonzero if true, 0 if false"));
	printf("%i\n", ft_isprint(' '));
	printf("%i\n", isprint(' '));
	printf("----------------------------");
	printf("\n%s\n", ("Test strlen"));
	printf("%zu\n", ft_strlen("werkt dit wel?"));
	printf("%zu\n", strlen("werkt dit wel?"));
	printf("----------------------------");
	printf("%s\n", ("\n\nTest memset"));
	char str[50] = "blablabla";
	printf("%s\n", ft_memset(str, 'a', 6));
	char str2[50] = "blablabla";
	printf("%s\n", memset(str2, 'z', 6));
	printf("----------------------------");
	printf("\n%s\n", ("Test bzero"));
	char str3[50] = "blablabla";
	ft_bzero(str3, 4);
	char str4[50] = "blablabla";
	bzero(str4, 4);
	helpmesee(str3, 9);
	printf("\n");
	helpmesee(str4, 9);
	printf("\n");
	printf("----------------------------");
	printf("\n%s\n", ("Test strlcpy"));
	char src[] = "hello";
	char dest[20];
	char src1[] = "hello";
	char dest1[20];
	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%zu\n", strlcpy(dest1, src1, 3));
	printf("test: %s\n", dest);
	printf("test: %s\n", dest1);
	printf("----------------------------");
	printf("\n%s\n", ("Test toupper"));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", toupper('z'));
	printf("%c\n", ft_toupper('@'));
	printf("%c\n", toupper('@'));
	printf("----------------------------");
	printf("\n%s\n", ("Test tolower"));
	printf("%c\n", ft_tolower('B'));
	printf("%c\n", tolower('B'));
	printf("%c\n", ft_toupper('@'));
	printf("%c\n", toupper('@'));
	printf("----------------------------");
	printf("\n%s\n", ("Test strchr"));
	char banana[] = "i see \0ou!";
	char apple[] = "ooo\0ooo\0oo";
	printf("%s\n", ft_strchr(banana, '\0'));
	printf("%s\n", strchr(banana, '\0'));
	printf("%s\n", ft_strchr(apple, 'y'));
	printf("%s\n", strchr(apple, 'y'));
	printf("----------------------------");
	printf("\n%s\n", ("Test strrchr"));
	char soup[] = "good soup";
	printf("%s\n", ft_strrchr(soup, 'o'));
	printf("%s\n", strrchr(soup, 'o'));
	printf("----------------------------");
	printf("\n%s\n", ("Test strncmp"));
	char cake[] = "blob\200labla";
	char pie[]	= "blob\0lublu";
	printf("%i\n", ft_strncmp(cake, pie, 6));
	printf("%i\n", strncmp(cake, pie, 6));
	printf("----------------------------");
	printf("\n%s\n", ("Test atoi"));
	char s[] = "99999999999999999";
	printf("%i\n", ft_atoi(s));
	printf("%i\n", atoi(s));
	printf("----------------------------");
	printf("\n%s\n", ("Test strnstr"));
	char haystack[] = "catfishswim";
	char needle[] = "fishs";
	printf("%s\n", ft_strnstr(haystack, needle, 8));
	printf("%s\n", strnstr(haystack, needle, 8));
	printf("----------------------------");
	printf("\n%s\n", ("Test strlcat"));
	char dst[50] = "blabla";
	char src2[] = "abcd";
	printf("%zu\n", ft_strlcat(dst, src2, 10));
	printf("%s\n", dst);
	char dst1[50] = "blabla";
	char src3[] = "abcd";
	printf("%zu\n", strlcat(dst1, src3, 10));
	printf("%s\n", dst1);
	printf("----------------------------");
	printf("\n%s\n", "Test memcpy");
	char test1[] = "blan";
	char test2[] = "sta";
	printf("%s\n", ft_memcpy(test1, test2, 2));
	char test3[] = "blan";
	char test4[] = "sta";
	printf("%s\n", memcpy(test3, test4, 2));
	/*ft_memcpy(((void *)0), "segfaulter tu dois", 17);*/
	printf("----------------------------");
	printf("\n%s\n", "Test memmove");
	char test5[] = "123456789";
	// char test6[] = "who";
	printf("%s\n", ft_memmove(test5+2, test5, 5));
	char test7[] = "123456789";
	// char test8[] = "who";
	printf("%s\n", memmove(test7+2, test7, 5));
	printf("----------------------------");
	printf("\n%s\n", "Test memchr");
	char test9[] = "hungry";
	printf("%s\n", ft_memchr(test9, '\0', 3));
	// ft_memchr(((void *)0), '\0', 0x20);
	char test10[] = "hungry";
	printf("%s\n", memchr(test10, '\0', 3));
	printf("----------------------------");
	printf("\n%s\n", "test memcmp");
	char test11[] = "blabla";
	char test12[] = "blabl";
	printf("%i\n", ft_memcmp(test11, test12, 6));
	char test13[] = "blabla";
	char test14[] = "blabl";
	printf("%i\n", memcmp(test13, test14, 6));
	printf("----------------------------");
	printf("\n%s\n", "test calloc");
	int size = 2147;

	void * d1 = ft_calloc(size, sizeof(int));
	void * d2 = calloc(size, sizeof(int));
	printf ("%i\n", ft_memcmp(d1, d2, size * sizeof(int)));
	free(d1);
	free(d2);
	printf("----------------------------");
	printf("\n%s\n", "test strdup");
	char test15[] = "blablablabla";
	char *test16;
	test16 = ft_strdup(test15);
	printf("%s\n", test16);
	free(test16);
	test16 = strdup(test15);
	printf("%s\n", test16);
	free(test16);
	printf("----------------------------");
	printf("\n%s\n", "test substr");
	char test17[] = "";
	printf("%s\n", ft_substr(test17, 1, 1));
	//write(1, test17, 60);
	// free(test17);
	printf("----------------------------");
	printf("\n%s\n", "test strjoin");
	char test18[] = "nado";
	char test19[] = "molla";
	printf("%s\n", ft_strjoin(test18, test19));
	printf("----------------------------");
	printf("\n%s\n", "test putchar");
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	printf("----------------------------");
	printf("\n%s\n", "test putstr");
	ft_putstr_fd("whoop", 1);
	ft_putchar_fd('\n', 1);
	printf("----------------------------");
	printf("\n%s\n", "test putendl");
	ft_putendl_fd("whoop", 1);
	ft_putchar_fd('\n', 1);
	printf("----------------------------");
	printf("\n%s\n", "test strtrim");
	char test20[] = "";
	char set[] = "";
	printf("%s\n", ft_strtrim(test20, set));
	printf("----------------------------");
	printf("\n%s\n", "test striteri");
	char test21[] = "dit is een hele leuke test zin weeeeee";
	printf("%s\n", test21);
	ft_striteri(test21, aaaaa);
	printf("%s\n", test21);
	ft_striteri(test21, ont_aaaaa);
	printf("%s\n", test21);
	printf("----------------------------");
	printf("\n%s\n", "test strmapi");
	char test22[] = "00000000000000000000000";
	char *test23;
	printf("%s\n", test22);
	test23 = ft_strmapi(test22, bbbbb);
	printf("%s\n", test23);
	printf("----------------------------");
	printf("\n%s\n", "test itoa");
	int n = 2147483647;
	printf("%s\n", ft_itoa(n));
	printf("----------------------------");
	printf("\n%s\n", "test putnbr");
	ft_putnbr_fd(55675, 1);
	printf("----------------------------");
	printf("\n%s\n", "test split uncomment return to test");
	char test24[] = "...loo...books....look....a....123.....test...";
	// char test24[] = "";
	char **array;
	int i; 
	
	i = 0;
	array = ft_split(test24, '.');
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
	// printf("----------------------------");
	// printf("\n%s\n", "test bonus");

	// t_list *islast;

	// t_list *lstr;
	// int	lsta;
	// lsta = 1;
	// lstr = ft_lstnew((void *) &lsta);
	// printlist(lstr);
	
	// t_list *nstr;
	// int *lstb;
	// lstb = malloc(sizeof (int));
	// *lstb = 2;
	// nstr = ft_lstnew((void *) lstb);
	// printlist(nstr);

	// // ft_lstadd_front(&lstr, nstr);
	// ft_lstadd_back(&lstr, nstr);
	// islast = ft_lstlast(lstr);
	// // ft_lstlast(nstr);
	// // printf("%i\n", ft_lstsize(lstr));
	// // printlist(lstr);
	// // printf("%i ", *(int *)islast->content);
	// // ft_lstdelone(nstr, delete);
	// // ft_lstclear(nstr, delete);
	// ft_lstmap(nstr, cccc, delete);
}

/* voor inleveren main verwijderen en git clonen voor final check!!!!!*/


// void	del(void *a)
// {
// 	// printf("\ndel: %s", (char *)a);
// }
// void	f(void *a)
// {
// 	// printf("\nf: %s", (char *)a);
// }
// int	main(void)
// {
// 	t_list	*root_node;
// 	t_list	*current_node;
// 	int		 i = 0;
// 	char	*items[] = {"lorem", "ipsum", "dolor", "sit", "item4",
// 						"item5", "item6", "item7","item8", "item9"};

// 	root_node = malloc(sizeof(t_list));

// 	root_node -> content = items[0];
// 	root_node -> next = NULL;

// 	current_node = root_node;
// 	while (i < 9)
// 	{
// 		current_node -> next = ft_lstnew(items[i + 1]);
// 		current_node = current_node -> next;
// 		i++;
// 	}
// 	current_node -> next = NULL;

// 	printf("\nBefore: ");
// 	current_node = root_node;
// 	while (current_node != NULL)
// 	{
// 		printf("%s, ", (char *) current_node -> content);
// 		current_node = current_node -> next;
// 	}

// 	printf("\nAfter: ");
// 	current_node = NULL;
// 	current_node = ft_lstmap(root_node, (void *)(f), del);
// 	while (current_node != NULL)
// 	{
// 		printf("%s, ", (char *)current_node -> content);
// 		current_node = current_node -> next;
// 	}
// }