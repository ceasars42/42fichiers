/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barnaud <barnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 08:49:00 by barnaud           #+#    #+#             */
/*   Updated: 2015/07/12 21:28:19 by barnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	sastantua(int n)
{
	int lignes;
	int lignesmax;
	int etag;
	int espacemax;
	int espace;
	int etagmax;
	int et;
	int etm;

	et = 0;
	etm = 1;
	lignes = 0;
	etag = 0;
	espace = 0;
	lignesmax = 2;
	etagmax = n;
	espacemax = 3;

	if (n > 0)
	{
		while (etag < n)
		{
			while (lignes <= lignesmax)
			{
				while (espace < espacemax)
				{
					ft_putchar(' ');
					espace++;
				}
				if (espace == espacemax)
				{
					ft_putchar('/');
					espace ++;
				}
				
				while ( et < etm)
				{
					ft_putchar('*');
					et++;
					if (et == etm)
					{
						ft_putchar('\\');
						ft_putchar('\n');
					}
				}
				et = 0;
				etm = etm + 2;
				espace = 0;
				espacemax -= 1;
				lignes++;
			}
			lignesmax += 2 + n;
			etm += 2 + n;
			etag++;
			espacemax += 1 - n;
		}
	}	
}
int main (void)
{
	sastantua(2);
	return (0);
}
