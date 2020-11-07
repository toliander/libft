#include "libft.h"

void	printe(void *str)
{
	ft_putstr_fd((char *)str, 1);
}

int main()
{
	char *tab[] = {NULL};
	t_list *head = NULL;
	t_list *copy = NULL;

	for (int i = 0; tab[i]; i++)
		ft_lstadd_back(&head, ft_lstnew(tab[i]));
	ft_lstiter(head, printe);
	copy = ft_lstmap(head, (void *)ft_strdup, free);
	ft_lstiter(copy, printe);
}
