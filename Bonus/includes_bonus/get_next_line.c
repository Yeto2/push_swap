/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 05:06:30 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 18:24:33 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

char	*free_buff(char *buffer, int index)
{
	int	i;

	i = 0;
	if (index == -1)
		index = BUFFER_SIZE;
	while (buffer[i + index])
	{
		buffer[i] = buffer[i + index + 1];
		i++;
	}
	while (buffer[i])
	{
		buffer[i] = 0;
		i++;
	}
	return (buffer);
}

int	check_nl(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*fill_line_buffer(int fd, char *buffer)
{
	int		is_nl;
	char	*line;
	line = NULL;
	is_nl = check_nl(buffer);
	line = ft_strjoin(line, buffer, is_nl + 1);
	buffer = free_buff(buffer, is_nl);
	while (is_nl == -1 && read(fd, buffer, BUFFER_SIZE))
	{
		is_nl = check_nl(buffer);
		line = ft_strjoin(line, buffer, is_nl + 1);
		buffer = free_buff(buffer, is_nl);
	}
	if (ft_strlen(line) == 0)
	{
		buffer = free_buff(buffer, -1);
		return (free(line), NULL);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	buffer[(unsigned int)BUFFER_SIZE + 1];
	char		*line;
	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	if (read(fd, buffer, 0) == -1)
	{
		free_buff(buffer, -1);
		return (NULL);
	}
	line = fill_line_buffer(fd, buffer);
	if (!line)
		return (NULL);
	return (line);
}
















//  _____ 
// |  ___|
// |___ | 
//     \ |
// /\__/ /
// \____/ 
       
       
	   
	/*
	
		daba fach salina line is ready wl buffer lakant chi chyata rah dernaha makantch rah khwinah kaml bach nkhdmo bih lmra jaya
		safi hadchi li mtlob ..
		w kolma 9elebti 3la examples ghatzidi tfehmi kter
		
		<--- lmain dyal had lfunction ghatl8ayh f main 3la lisr 
		

		good luck Hun <3
	
	*/























// ----------------> example 1 <----------------

/*
#include <stdio.h>

void functionWithOutStatic() {
    // Static variable
    int Var = 5;

    
    Var++;

    printf(" Var = %d\n",Var);
}

void functionWithStatic() {
    // Static variable
    static int staticVar = 5;

    // Access and modify static variable
    staticVar++;

    printf(" staticVar = %d\n",staticVar);
}

int main() {
	
	// ida la7dti li fiha statik variable katb9a 3a9la 3la value dyalha fin wslat wkha kanzidoha 
	// kol mara kan3ayto 3la had lfunction katb9a ttzaad ... normal variable la kirja3ha kif kan
	
    // function with static variable
	functionWithStatic();
	functionWithStatic();
	functionWithStatic();
	
    printf("\n");
    
	// function without static variable
    functionWithOutStatic();
	functionWithOutStatic();
	functionWithOutStatic();

    return 0;
}

*/