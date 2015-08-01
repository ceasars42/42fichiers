/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barnaud <barnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 17:55:45 by barnaud           #+#    #+#             */
/*   Updated: 2015/07/18 22:25:24 by barnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	sudoku(omt argc, char **argv);

int		main(int argc, char **argv)
{
	if (argc == 10)
	{
		sudoku(argv)
		return(0);
	}
	else 
		ft_putstr("ERREUR\n");
	return (0);
}
