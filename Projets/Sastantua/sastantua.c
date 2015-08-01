/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barnaud <barnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/12 08:49:00 by barnaud           #+#    #+#             */
/*   Updated: 2015/07/12 22:36:35 by barnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_lignesmax(int n, int lignesmax)
{
	int lignesmax;
	int n1;
	int lignedebut;

	n1 = 0;
	lignesmax = 0;
	lignedebut = 3;
	while (n1 <= n)
	{
		n1 += 1;
		lignesmax = lignesmax + n1 + lignedebut;
	}

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
	lignes = 0;
	etag = 0;
	espace = 0;
	lignesmax = 3 + (1 * n) - 2;
	etbase =  
	espacemax = lignesmax / 2 )

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
				lignes++;
			}
			etm += 2 + n;
			etag++;
		}	
	}
}
int main (void)
{
	sastantua(5);
	return (0);
}
