#include "libft.h"

int    ft_toupper(int c)
{
    /* this checks if the character is a lower-case letter
     * with the decimal ASCII values (97 => a; 122 => z)
     */
    if (c >= 97 && c <= 122)
        /* in the ASCII table, upper-case letter are indexed 32 
         * less than lower-case letter, so to get the corresponding
         * upper-case letter, we substract 32 to the lower-case
         * letter
         */
        return (c - 32);
    /* As said in the man, if the character is not a lower-case
     * letter, the argument is returned unchanged, that's why we
     * return c directly
     */
    return (c);
}
