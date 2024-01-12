#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
//  int main()
//  {
//      char *s1 = "TecH";
//      char *s2 = "Tech";
//      int ret = ft_strcmp(s1, s2);
//      if (ret > 0) {
//          printf("%s", "s1 is greater than s2");
//      }
//      else if (ret < 0) {
//          printf("%s", "s1 is less than s2");
//      }
//      else {
//          printf("%s", "s1 is equal to s2");
//      }
//      return 0;
//  }
