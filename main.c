// ... existing code ...
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    const char *a[] = {"adajsdkjhasdhajhsdkhagsddasdaskjhdkjhasdjhajshdndsajdkjn", "2", "3", "4"};


    printf("Size of pointer array: %d\n",  (int)sizeof(a));
    printf("First string: %s\n",  a[0]);
    
    size_t total_len = 0;
    for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        total_len += ft_strlen(a[i]);
    }
    printf("Total length of strings: %zu\n", total_len);

	printf("\n--- Copying array 'a' to 'b' ---\n");
	size_t	a_len = sizeof(a) / sizeof(a[0]);
	char	**b = (char **)malloc((a_len + 1) * sizeof(char *));
	if (!b)
		return (1);
	for (size_t i = 0; i < a_len; i++)
	{
		b[i] = strdup(a[i]);
		if (!b[i])
		{
			while (i > 0)
				free(b[--i]);
			free(b);
			return (1);
		}
	}
	b[a_len] = NULL;
	printf("Array 'a' copied to 'b'. 'b' is a new, separate copy in memory.\n");

	printf("\n--- Detailed logs for array 'b' ---\n");
	printf("Address of pointer 'b' on the stack: %p\n", (void *)&b);
	printf("Address 'b' points to on the heap (start of pointer array): %p\n", (void *)b);
	size_t b_total_string_len = 0;
	size_t b_pointer_array_size = (a_len + 1) * sizeof(char *);
	for (size_t i = 0; i < a_len; i++)
	{
		size_t len = ft_strlen(b[i]);
		b_total_string_len += len;
		printf("b[%zu]:\n", i);
		printf("  - Address of pointer b[%zu]: %p\n", i, (void *)&b[i]);
		printf("  - Pointer value (address of string): %p\n", (void *)b[i]);
		printf("  - String value: \"%s\"\n", b[i]);
		printf("  - String length: %zu\n", len);
	}
	printf("\nTotal memory allocated for 'b':\n");
	printf("  - For the pointer array: %zu bytes\n", b_pointer_array_size);
	printf("  - For the string data: %zu bytes (including null terminators)\n", b_total_string_len + a_len);
	printf("  - Grand total: %zu bytes\n", b_pointer_array_size + b_total_string_len + a_len);

	printf("\n--- Freeing memory for 'b' ---\n");
	for (size_t i = 0; b[i] != NULL; i++)
	{
		printf("Freeing b[%zu]: \"%s\"\n", i, b[i]);
		free(b[i]);
	}
	free(b);
	printf("All memory for 'b' has been freed.\n");
}
