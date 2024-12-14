#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size ;
	p = malloc(b);
	if(p == NULL)
	return(NULL);
	else
	memset(p, 0, b);
	return(p);
}
// int  main()
// {
// 	 int *array = (int *)ft_calloc(5, sizeof(int)); // Alokujemy pamięć dla 5 elementów typu int
//     if (!array) {
//         printf("Błąd alokacji pamięci!\n");
//         return 1;
//     }

//     // Sprawdzamy zawartość zaalokowanej tablicy (powinna być wyzerowana)
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", array[i]); // Wszystkie wartości powinny wynosić 0
//     }

//     free(array); // Zwalniamy pamięć
//     return 0;
// }