stdlib
"ft_list.h"

if begin_list == null || *begin_list == null
	return

t_list *c = *begin_list

if (cmp(c->data, data_ref) == 0
	*begin_list = c->next
	free(c)
	ft_list_remove_if(begin_list, data_ref, cmp)
else
	c = *begin_list
	ft_list_remove_if(&cur->next, data_ref, cmp)
