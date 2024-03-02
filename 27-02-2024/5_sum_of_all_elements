#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};


// Use node->next to get the next node
// Use node->data to get the data of the node
// Use node->next = new_node to set the next node


int sum(struct node *head) {
    int sum = 0;
    while(head != NULL){
        sum += head->data;
        head = head->next;
    }
    return sum;
}


int main(){
    int n;
    scanf("%d", &n);
    struct node *head = NULL;
    struct node *current = NULL;


    for (int i = 0; i < n; i++) {
        struct node *new_node = malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = new_node;
        }
    }


    printf("%d\n", sum(head));


}
