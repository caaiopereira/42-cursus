uns it i = 0
it t

wh i < size - 1
	if tab[i] > tab[i + 1]
		t = tab[i]
		tab[i] = tab[i + 1]
		tab[i + 1] = t
		 i = 0
	else
		i++
