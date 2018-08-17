/* Modify the compare_parts function so that parts are sorted with 
 * their numbers in decending order
 */
#include <stdio.h>

struct part(const void *p, const void *q){
    const struct part *p1 = p;
    const struct part *p2 = q;

    return p1->part_number - p2->part_number;
}