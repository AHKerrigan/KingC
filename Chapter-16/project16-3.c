/* Example program that maintains a parts database (array version) 
 * MOD 16-2: Modify inventory.c so the parts are printed in order
 * MOD 16-3: Modify so inventory and num_parts is local
 */

#include <stdio.h>
#include <ctype.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    };


int read_line(char str[], int n){
    int ch, i =0;

    while(isspace(ch = getchar()));
    while(ch != '\n' && ch != EOF){
        if(i < n){
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}

/* find parts: Looks up a part number in the inventory array. Returns
 *             the array index if the part number is found; otherwise
 *             returns -1.
 */
int find_part(int number, struct part inventory[MAX_PARTS], int num_parts){
    int i;

    for(i = 0; i < num_parts; i++){
        if(inventory[i].number == number){
            return i;
        }
    }
    return -1;
}

/* insert: Prompts the user for information about a new part and then
 *         inserts the part into the database. Prints an error message 
 *         and returns prematurely if the part already exists or the 
 *         database is full.
 */
void insert(struct part inventory[MAX_PARTS], int *num_parts){
    int part_number;
    int i, n;

    if(*num_parts == MAX_PARTS){
        printf("Database is full; can't add more parts.\n");
        return;
    }
    printf("Enter part number: ");
    scanf("%d", &part_number);
    if(find_part(part_number, inventory, *num_parts) >= 0){
        printf("Part already exists.\n");
        return;
    }
    // Base cases where there are no parts, or the entered part is 
    // greater than the currently greatest part
    if(*num_parts == 0){
        inventory[*num_parts].number = part_number;
        printf("Enter parts name: ");
        read_line(inventory[*num_parts].name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d", &inventory[*num_parts].on_hand);
       *num_parts += 1;
    }
    else if(part_number > inventory[*num_parts - 1].number){
        inventory[*num_parts].number = part_number;
        printf("Enter parts name: ");
        read_line(inventory[*num_parts].name, NAME_LEN);
        printf("Enter quantity on hand: ");
        scanf("%d", &inventory[*num_parts].on_hand);
        *num_parts += 1;
    }
    // Uses insertion sort to ensure parts are always in sorted oder
    else{
        for(i = 0; i < *num_parts; i++){
            if(part_number <= inventory[i].number){
                for(n = *num_parts; n > i; n--){
                    inventory[n] = inventory[n - 1];
                }
                inventory[n].number = part_number;
                printf("Enter parts name ");
                read_line(inventory[n].name, NAME_LEN);
                printf("Enter quantity on hand: ");
                scanf("%d", &inventory[n].on_hand);
                *num_parts += 1;
                break;
            }
        }
    }
}

/* search: Prompts the user to enter a part number, then looks up 
 *         the part in the database. If the part exists, prints the name
 *         and quantity on hand; if not, prints an error message.
 */
void search(struct part inventory[MAX_PARTS], int num_parts){
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, inventory, num_parts);
    if(i >= 0){
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    }
    else {
        printf("Part not found\n");
    }
}

/* update: Prompts the user to enter a part number. Prints an error
 *         message if the part doesn't exist; otherwise, prompts the 
 *         user to enter change in quanitity on hand and updates the
 *         database
 */
void update(struct part inventory[MAX_PARTS], int num_parts){
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number, inventory, num_parts);
    if(i >= 0){
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    }
    else{
        printf("Part not found\n");
    }
}

/* print: Prints a listing of all parts in the database, showing the part
 *        number, part name, and quanitty on hand. Parts are printed in
 *        the order in which they were entered into the database
 */
void print(struct part inventory[MAX_PARTS], int num_parts){
    int i;

    printf("Part Number     Part Name                  "
    "Quantity on Hand\n");
    for(i = 0; i < num_parts; i++){
        printf("%7d         %-25s%11d\n", inventory[i].number,
        inventory[i].name, inventory[i].on_hand);
    }
}

/* main: Prompts the user to enter an operation code, then calls a 
 *       function to perform the requested action. Repeats until the
 *       user enteres the command 'q'. Prints an error message if the 
 *       user enters an illegal code.
 */

int main(void){
    char code;

    struct part inventory[MAX_PARTS];

    int num_parts = 0; /* number of parts currently stored */

    for(;;){
        printf("Enter an operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n');
        switch(code){
            case 'i': insert(inventory, &num_parts); break;
            case 's': search(inventory, num_parts); break;
            case 'u': update(inventory, num_parts); break;
            case 'p': print(inventory, num_parts); break;
            case 'q': return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}