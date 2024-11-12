#include "libft.h"

int    ft_tolower(int c)
{
    /* this checks if the character is a lower-case letter
     * with the decimal ASCII values (65 => A; 90 => Z)
     */
    if (c >= 65 && c <= 90)
        /* in the ASCII table, upper-case letter are indexed 32 
         * less than lower-case letter, so to get the corresponding
         * lower-case letter, we add 32 to the upper-case
         * letter
         */
        return (c + 32);
    /* As said in the man, if the character is not a upper-case
     * letter, the argument is returned unchanged, that's why we
     * return c directly
     */
    return (c);
}
