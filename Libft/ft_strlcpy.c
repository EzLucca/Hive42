#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    if (!src) 
        return 0; // Return 0 if src is NULL

    size_t src_len = ft_strlen(src);

    // If dstsize is 0, we can't copy anything, so return the length of src
    if (dstsize == 0)
        return src_len;

    // Determine the number of characters to copy (either all of src or up to dstsize - 1)
    size_t copy_len = (src_len < dstsize - 1) ? src_len : dstsize - 1;

    // Copy src to dst up to the calculated length
    ft_memcpy(dst, src, copy_len);

    // Null-terminate dst
    dst[copy_len] = '\0';

    return src_len; // Return the full length of src
}

