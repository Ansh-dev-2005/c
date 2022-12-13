// /Use self-referential structure to handle its elements (at least two) with random and dynamically allocatedmemory. [Hint: Get a big number as string, split this string into substrings of 5 digits each => convert eachsubstring in to an integer => store in num_part1, num_part2 of each block. Find the number of blocks andaccordingly allocate memory]
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int num_part1;
    int num_part2;
    struct node *next;
};
int main()
{
    struct node *ptr, *head;
    int n, i, j, k, l, m, len;
    char num[100];
    printf("Enter the number: ");
    scanf("%s", num);
    len = strlen(num);
    n = len / 5;
    if (len % 5 != 0)
        n++;
    ptr = (struct node *)malloc(n * sizeof(struct node));
    head = ptr;
    for (i = 0; i < n; i++)
    {
        j = 0;
        k = 0;
        l = 0;
        m = 0;
        while (j < 5 && num[k] != '\0')
        {
            if (j < 3)
            {
                l = l * 10 + (num[k] - '0');
            }
            else
            {
                m = m * 10 + (num[k] - '0');
            }
            j++;
            k++;
        }
        ptr->num_part1 = l;
        ptr->num_part2 = m;
        ptr->next = ptr + 1;
        ptr++;
    }
    ptr--;
    ptr->next = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d %d \t", ptr->num_part1, ptr->num_part2);
        ptr = ptr->next;
    }
    free(head);
    return 0;
}