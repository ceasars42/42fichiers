/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barnaud <barnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 22:20:07 by barnaud           #+#    #+#             */
/*   Updated: 2015/07/19 11:04:10 by barnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_grille(int argc, char **argv );
{
	int grille[argc][argv];

	grille = malloc(sizeof((int) * (argc)));
}

int		ft_lignes(int grille[argc][argv], int n)
{
	int index;

	index = 1;
	while (index <= argv)
	{
		if (grille[argc][argv] == n)
			return (1);
		index++;
		argv++;
	}
	return (0);
}
int		ft_colonne(int grille[argc][argv], int n)
{
	int index;

	index = 1;
	while (index <= argc)
	{
		if (grille[argc][argv] == n)
			return (1);
		index++;
		argc--;
	}
	return (0);
}
int		ft_block(int grille[argc][argv], int n)
{
	int index;

index 
	while (index <= argc && 
}
