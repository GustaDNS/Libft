#include "libft.h"

/*
The memmove() function copies n bytes from memory area src to memory area dest. 
The memory areas may overlap: copying takes place as though the bytes in src are first copied 
into a temporary array that does not overlap src or dest, and the bytes are then copied from 
the temporary array to dest.

The memmove() function returns a pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*memsrc;
	unsigned char		*memdest;

	memsrc = (const unsigned char *)src;
	memdest = (unsigned char *)dest;
	if (memsrc == memdest || n == 0)
		return (dest);

	if (memdest < memsrc || memdest >= (memsrc + n))
	{
	/*
		Se src começa no endereço 100 e n é 10, então memsrc + n resulta no endereço 110.
		Se dest começa no endereço 110 ou mais, a condição memdest >= (memsrc + n) é verdadeira, 
		indicando que dest não se sobrepõe a `src	
	*/
		while (n--)
			*memdest++ = *memsrc++;
	}
	else
	{
		memdest += n - 1;
		memsrc += n - 1;
		/*
		memdest += n - 1;: Adiciona n - 1 à posição atual de memdest. 
		Isso move o ponteiro memdest para o último byte onde os dados serão copiados.
		Em resumo, essa operação ajusta o ponteiro memdest para apontar 
		para o último byte da área de destino onde os dados serão copiados.
		*/
		while (n--)
			*memdest-- = *memsrc--;
	}
	return (dest);
}
/* int	main()
{
	char str1[] = "Geeks";
	char str2[] = "Quiz";
	ft_memmove(str1 + 2, str2, 3);
	printf("%s\n", str1);
	memmove(str1 + 2, str2, 3);
	printf("%s", str1);
	return (0);
} */