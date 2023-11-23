/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:10:35 by caiperei          #+#    #+#             */
/*   Updated: 2023/11/21 11:14:21 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//extrai e retornar a string apos o \n
static char	*rest_line(char *line)
{
	size_t	i;//percorrer string
	char	*rest;//armazenar conteudo apos \n
	size_t	count;

	i = 0;
	while (line[i] && line[i] != '\n')//percorre até o \n 
		i++;
	if (!(line[i]))//verifica se caractere atual é o \0
	{
		free(line);// libera a memoria
		return (NULL);// caso nao há mais conteudo retornar null
	}
	if (line[i] == '\n')//verifica se é o \n
		i++;//incrementa para o prox caractere apos \n
	rest = malloc(sizeof(char) * ft_strlen(line) - i + 1);
	//aloca memória para o conteúdo restante, -i para calcular tamanho da alocação
	if (!(rest))
		return (NULL);//verificação de memoria valida, caso nao retorna null
	count = 0;
	while (line[i])
		rest[count++] = line[i++];//copia line para rest
	rest[count] = '\0';
	free(line);//liberação de memória
	return (rest);//retorna a linha apos o \n
}

//extrai e corta uma linha até o \n
static char	*cut_line(char *line)
{
	size_t	i;//percorrer string
	char	*cut;//armazenar linha cortada

	i = 0;
	if (!*line)//verificação se line esta vazia
		return (NULL);//retornar null caso não há nada para cortar
	while (line[i] && line[i] != '\n')//percorre até o \n
		i++;
	cut = malloc(sizeof(char) * i + 2);//aloca na memoria, +2 para \n e o \0
	if (!(cut))
		return (NULL);//verificação de memoria valida, caso nao retorna null
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		cut[i] = line[i];//copia line para cut
		i++;//incrementa até encontrar \n ou \0 da string
	}
	if (line[i] == '\n')
		cut[i++] = '\n';//adiciona \n
	cut[i] = '\0';//adiciona nulo indicando fim da string
	return (cut);//retorna a linha cortada
}

//ler o conteudo até encontrar o \n ou \0
static char	*read_line(char *line, int fd)
{
	char	*buffer;//armazenar linha
	int		count;//guardar numero de bytes lidos

	count = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	//aloca na memoria com tamanho especificado(BUFFER_SIZE), +1 para o \0
	if (!(buffer))
		return (NULL);//verificação de memoria valida, caso nao retorna null
	while (count > 0 && !ft_strchr(line, '\n'))
	{//loop caso nao encontre \n
		count = read(fd, buffer, BUFFER_SIZE);
		//ler o conteudo 
		if (count < 0)
		//verificação de erro durante a leitura
		{
			free(buffer);//liberação de memoria
			return (NULL);
		}
		buffer[count] = '\0';//adiciona nulo
		line = ft_strjoin(line, buffer);
		//concatena o buffer com line indicando como dados lidos
	}
	free(buffer);//liberação de memoria apos a leitura
	return (line);//retorna line contendo os dados lidos até o momento
}

//ler linhas de um arquivo uma por vez
char	*get_next_line(int fd)
{
	static char	*string;//variavel estatica para manter conteudo
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)//verifica se são valores positivos
		return (NULL);
	string = read_line(string, fd);//chama a função para ler e armazenar na variavel
	if (!(string))
		return (NULL);//verifica se houve falha ou chegou no final do arquivo
	line = cut_line(string);//função para extrair uma linha da string lida
	string = rest_line(string);// atualiza a variavel e armazena o restante apos a linha cortada
	return (line);// retorna a linha que foi lida
}
