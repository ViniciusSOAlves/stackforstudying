#include <stdio.h>

typedef int dataType;
const int max_size = 100;

int lenght = 0;

int isEmpty(){
    if(lenght == 0){
        return 1;
    }else return 0;
}

int isFull(){
    if(lenght == max_size){
        return 1;
    }else return 0;
}
void push(dataType stack[], dataType item){
    stack[lenght] = item;
    lenght++;

}
dataType pop(dataType stack[]){
    lenght--;
    return stack[lenght+1];
}
void printStack(dataType stack[]){
    printf("Stack = [ ");
    for(int i = 0; i < lenght; i++){
        printf("%d ", stack[i]);
    }
    printf("]");
}

int main(){
    
    dataType stack[max_size];
    dataType item;

    int option;

    do{
        printf("\n1 - Push an item to Stack.\n2 - Pop an item from Stack\n3 - Print Stack\n4 - Print the lengh of the Stack \nChoice: ");
        scanf("%d", &option);

        switch(option){
            case 1: 
            if(isFull()) {
                printf("Stack is full, can't push any items to it.\n");
            }else {
                printf("Wich item do you want to push to Stack: ");
                scanf("%d", &item);
                push(stack, item);
            }
            break;

            case 2:
            if(isEmpty()){
                printf("Stack is empty, can't put any items from it.\n");
            }else printf("Item popped: %d", pop(stack));
            break;

            case 3:
            printStack(stack);
            break;

            case 4:
            printf("Lenght of stack: %d", lenght);
        }
    }while(option!=0);


    return 0;
}