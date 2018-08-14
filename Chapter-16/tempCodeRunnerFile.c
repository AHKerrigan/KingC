void insert(void){
    int part_number;
    int i, n;

    if(num_parts == MAX_PARTS){
        printf("Database is full; can't add more parts.\n");
        return;
    }
    printf("Enter part number: ");
    scanf("%d", &part_number);
    if(find_part(part_number) >= 0){
        printf("Part already exists.\n");
        return;
    }
    // Base cases where there are no parts, or the entered part is 
    // greater than the currently greatest part
    if(num_parts == 0){
        inventory[num_parts].number = part_number;
        printf("Enter parts name: ");
        read_line(inventory[num_parts].name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d", &inventory[num_parts].on_hand);
        num_parts++;
    }
    else if(part_number > inventory[num_parts - 1].number){
        inventory[num_parts].number = part_number;
        printf("Enter parts name: ");
        read_line(inventory[num_parts].name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d", &inventory[num_parts].on_hand);
        num_parts++;
    }
    // Uses insertion sort to ensure parts are always in sorted oder
    else{
        for(i = 0; i < num_parts; i++){
            if(part_number <= inventory[i].number){
                for(n = num_parts; n > i; n--){
                    inventory[n] = inventory[n - 1];
                }
                inventory[n].number = part_number;
                printf("Enter parts name ");
                read_line(inventory[n].name, NAME_LEN);
                printf("Enter quantity on hand: ");
                scanf("%d", &inventory[n].on_hand);
                num_parts++;
                break;
            }
        }
    }
}

/* search: Prompts the user to enter a part number, then looks up 
 *         the part in the database. If the part exists, prints the name
 *         and quantity on hand; if not, prints an error message.
 */
void search(void){
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if(i >= 0){
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    }
    else {
        printf("Part not found\n");
    }