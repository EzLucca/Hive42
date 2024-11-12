#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char            cc,
    
    /* we convert c to a char as we got it as an int */
    cc = (char) c;
    i = 0;
    /* looping over the whole string s */
    while (s[i])
    {
        /* if the current character is equal to cc 
         * this means we found an occurence of c in the string
         * therefore, we return the address of the char as a char pointer
         */
        if (s[i] == cc)
            return ((char *) &s[i]);
        /* if the current character is not equal to cc
         * we advance in the string
         */
        i++;
    }
    /* once we looped over the whole string, if we didn't find an
     * occurence of cc, we have to check if cc is equal to '\0'
     * so we check once again if the current character is equal to cc
     * if this is the case, we return the address of '\0' as a char
     * pointer
     */
    if (s[i] == cc)
        return ((char *) &s[i]);
    /* if we reach this point, this means we didn't find any
     * occurence of cc in the string so we return NULL as
     * stated in the man
     */
    return (NULL);
}
