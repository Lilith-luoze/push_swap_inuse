#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
} t_node;

typedef struct s_stack
{
    t_node *top;
    int size;
    char name;
} t_stack;

void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);

void dispatch_sort(t_stack *a, t_stack *b);

void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);

void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);

void stack_init(t_stack *s, char name);
t_node *node_new(int value);
void stack_push(t_stack *s, t_node *n);
t_node *stack_pop(t_stack *s);

/*parse*/
char **ft_free_split(char **ptr);
char **ft_split(char const *s, char c);

#endif
