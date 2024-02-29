stdlib
"list.h"

it s
t_list *t

t = lst
while lst->next != null
	if (*cmp)(lst->data, lst->next->data) == 0
		s = lst->data
		lst->data = lst->next->data
		lst->next->data = s
		lst = t
	else
		lst = lst->next
lst = t
return lst
