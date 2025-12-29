/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veronikaskopova <veronikaskopova@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 00:21:20 by veronikasko       #+#    #+#             */
/*   Updated: 2025/12/28 21:07:08 by veronikasko      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//main_bonus
/*
int		main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;
	
	fd1 = open("text1.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1)
	{
		perror("open");
		return (1);
	}
	while (1)
	{
		line1 = get_next_line(fd1);
        line2 = get_next_line(fd2);
		//??
		if (!line1 && !line2)
			break;
		if (line1)
        {
            printf("File1: %s", line1);
            free(line1);
        }

        if (line2)
        {
            printf("File2: %s", line2);
            free(line2);
        }
	}
	close(fd1);
    close(fd2);
	return (0);
}*/

//main
/*
int		main(void)
{
	int		fd;
	char	*line;
	
	fd = open("code.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}*/