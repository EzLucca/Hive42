void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /* declare a temporary pointer for dst */
    unsigned char* tmp_dst;
    /* declare a temporary pointer for src */
    unsigned char* tmp_src;

    /* if src and dst are NULL, return dst */
    if (dst == (void *)0 && src == (void *)0)
        return (dst);
    /* make dst tmp pointer equal to dst converted to unsigned char * */
    tmp_dst = (unsigned char *) dst;
    /* make src tmp pointer equal to src converted to unsigned char * */
    tmp_src = (unsigned char *) src;
    while (n > 0)
    {
        /* making current byte of tmp_dst = current byte of
         * tmp_src 
         */
        *(tmp_dst++) = *(tmp_src++);
        /* reducing n by one so we only copy n bytes */
        n--;
    }
    /* returning original dst, not our temporary pointer */
    return (dst);
}
