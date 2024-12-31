#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /* declare a temporary pointer for dst */
    unsigned char* tmp_dst;
    /* declare a temporary pointer for src */
    unsigned char* tmp_src;

    /* check if src and dst are NULL, return dst */
    if (dst == NULL || src == NULL)
    {
        return NULL;
    }
    /* make dst tmp pointer equal to dst converted to unsigned char * */
    tmp_dst = (unsigned char *) dst;
    /* make src tmp pointer equal to src converted to unsigned char * */
    tmp_src = (unsigned char *) src;

    // copy n bytes from src to dst
    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
}
