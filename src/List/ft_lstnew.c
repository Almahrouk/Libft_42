/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:54:24 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/09/11 13:54:26 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	head->prev = NULL;
	return (head);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;

    // Create new nodes
    node1 = ft_lstnew("First node");
    node2 = ft_lstnew("Second node");
    node3 = ft_lstnew("Third node");

    // Check for NULL
    if (!node1 || !node2 || !node3)
    {
        perror("ft_lstnew failed");
        return (1);
    }

    // Link the nodes
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;

    // Print the list
    t_list *current = node1;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Free the allocated nodes
    free(node1);
    free(node2);
    free(node3);

    return (0);
}
*/