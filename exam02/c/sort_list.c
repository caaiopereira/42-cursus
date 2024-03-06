stdlib //dt = data, nt = next
"list.h"

it s
t_list *t

t = lst
wh lst->nt != 0
	if (*cmp)(lst->dt, lst->nt->dt) == 0
		s = lst->dt
		lst->dt = lst->nt->dt
		lst->nt->dt = s
		lst = t
	else
		lst = lst->nt
lst = t
return lst
