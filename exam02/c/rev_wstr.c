	it s
	it e
	it i = 0;
		wh av[1][i]
			i++
		wh i >= 0
			wh av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t'
				i--
			e = i;
			wh av[1][i] && av[1][i] != ' ' && av[1][i] != '\t'
				i--
			s = i + 1
			it  flg
			flg = s
			wh s <= e
				write av[1][s]
				s++	
			if flg != 0
				write " "
