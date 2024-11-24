#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *data;
    t_list  *node;

    data = "hello, list!";

    // new node creating
    node = ft_lstnew((void *)data);

    // check success
    if (!node)
    {
        printf("failed to allocate memory for new node\n");
        return (1);
    }

    // print content
    printf("node content: %s\n", (char *)node->content);

    // free memory
    free(node);

    return (0);
}
*/