#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    /* declare a temporary unsigned char * */
    unsigned char   *temp_ptr;
    /* make this temporary variable equals to void *b converted to unsigned char */
    temp_ptr = (unsigned char*) b;
    /* loop on the temporary variable while we didn't reach len */
    while (len > 0)
    {
        /* in that loop, set the current byte equal to c converted to unsigned char */
        (*temp_ptr++) = (unsigned char) c;
        len--;
    }
    /* return void *b */
    return (b);
}
