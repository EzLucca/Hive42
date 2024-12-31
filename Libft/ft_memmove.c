#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    /* declare 2 temporary pointer for src and dst */
    char    *tmp_dst;
    char    *tmp_src;
    /* declare a counter */
    size_t  i;
    /* check if both src and dst are NULL */
    if (src == NULL || dst == NULL)
    {
        return NULL;
    }
    /*Assining the values of src and dst to the temporary variable, so the originals are not messed with*/
    tmp_src = (char *) src;
    tmp_dst = (char *) dst;
    i = 0;

    /* checking if the address of the destination is greater than the
     * address of the source, if that's the case we'll copy from end to
     * start
     */
    if (tmp_dst > tmp_src)
    {
        while (len-- > 0)
            tmp_dst[len] = tmp_src[len];
        /* if the address of the destination is not greater than the address
     * of the source, we'll copy from start to end, like we're used to
     */
    }
    else
{
        while (i++ < len)
            tmp_dst[i] = tmp_src[i];
    }
    return (dst);
}
