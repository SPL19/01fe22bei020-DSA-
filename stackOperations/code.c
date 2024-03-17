#include <stdio.h>

#define MAX_SIZE 10

// Stack structure
struct Stack
{
    int items[MAX_SIZE];
    int top;
};
void push(struct Stack *s, int value);
int pop(struct Stack *s);
void displayStack(struct Stack *s);
int peek(struct Stack *s);

int main()
{
    struct Stack stack;
    stack.top = -1; // Initialize stack

    FILE *input;
    input = fopen("input.txt", "r");
    if (input == NULL)
    {
        perror("\nError in opening input file\n");
        return 1;
    }

    char operation;
    int value;
    int poppedValues[MAX_SIZE]; // Array to store popped values
    int poppedIndex = 0; // Index for poppedValues array

    while (fscanf(input, "%c %d\n", &operation, &value) != EOF)
    {
        if (operation == 'P')
        {
            // Push operation
            if (stack.top >= MAX_SIZE - 1)
            {
                printf("Stack overflow!\n");
                break;
            }
            push(&stack, value);
        }
        else if (operation == 'O')
        {
            // Pop operation
            int poppedValue = pop(&stack);
            if (poppedValue != -1)
            {
                printf("Popped element: %d\n", poppedValue);
                poppedValues[poppedIndex++] = poppedValue; // Store popped value
            }
        }
    }
    fclose(input);

    // Display elements from the stack
    printf("\nElements in the stack:\n");
    displayStack(&stack);

    // Peek the top element of the stack
    int topValue = peek(&stack);
    if (topValue != -1)
    {
        printf("Peek element: %d\n", topValue);
    }

    
    FILE *output;
    output = fopen("output.txt", "w");
    if (output == NULL)
    {
        perror("\nError in opening output file\n");
        return 1;
    }

   
    fprintf(output, "Popped element: ");
    for (int i = 0; i < poppedIndex; i++)
    {
        fprintf(output, "%d ", poppedValues[i]);
    }
    fprintf(output, "\n");

    
    fprintf(output, "Stack elements: ");
    for (int i = stack.top; i >= 0; i--)
    {
        fprintf(output, "%d ", stack.items[i]);
    }
    fprintf(output, "\nPeek element: %d\n", topValue);

    fclose(output);

    return 0;
}

void push(struct Stack *s, int value)
{
    if (s->top >= MAX_SIZE - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    s->items[++(s->top)] = value;
}

int pop(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack underflow!\n");
        return -1; // Return an error value
    }
    return s->items[(s->top)--];
}

void displayStack(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int peek(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty.\n");
        return -1; // Return an error value
    }
    return s->items[s->top];
}
