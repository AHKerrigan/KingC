/* Modify the delete_from_list function so that it uses only one
 * pointer variable instead of one
 */

void *delete_from_list(struct node **list, int n){
    struct node *entry = *list;

    while(entry){
        if(entry->value == n){
            *list = entry->next;
            free(entry);
            break;
        }
        list = &entry->next;
        entry = entry->next;
    }
}