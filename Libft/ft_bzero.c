void    ft_bzero(void *s, size_t n)
{
    /* declare a temporary pointer */
    char *temp_ptr;
    /* make the temporary pointer equal to *s converted to a char * */
    temp_ptr = (char*) s;
    /* loop on the temporary pointer while we didn't reach n characters */
    while (n > 0)
    {
    /* in that loop, set the current byte equal to 0 */
        *(temp_ptr++) = 0;
        n--;
    }
}
