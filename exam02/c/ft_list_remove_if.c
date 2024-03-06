stdlib //dt = data , nt = next
"ft_list.h"

if begin_list == 0 || *begin_list == 0
	return

t_list *c = *begin_list

if (cmp(c->dt, dt_ref) == 0
	*begin_list = c->nt
	free(c)
	ft_list_remove_if(begin_list, dt_ref, cmp)
else
	c = *begin_list
	ft_list_remove_if(&cur->nt, dt_ref, cmp)
