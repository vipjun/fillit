/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:18:04 by dkotov            #+#    #+#             */
/*   Updated: 2018/07/03 23:18:05 by dkotov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	tetro_symbol(int tetro_num)
{
	char	sym;

	sym = tetro_num + 64;

	return (sym);
}

t_piece *struct_new_piece(char *s, int tetro_num)
{
	t_piece	*piece;

	if ((piece = (t_piece *)malloc(sizeof(*piece))) == NULL)
		return (NULL);
	if (piece->symbol == NULL || piece->content == NULL)
	{
		piece->symbol = NULL;
		piece->content = NULL;
	}
	else
	{
		piece->symbol = tetro_symbol(tetro_num);
		piece->content = tetro_new_string(tetro_clean_coordinates(tetro_get_coordinates(s, 0, 19)))
	}
	piece->next = NULL;
	return (piece);
}

t_piece *struct_add_piece(t_piece old_piece, char *s, int tetro_num)
{
	t_piece	*piece;

	if ((piece = (t_piece *)malloc(sizeof(*piece))) == NULL)
		return (NULL);
	if (symbol == NULL || content == NULL)
	{
		piece->symbol = NULL;
		piece->content = NULL;
	}
	else
	{
		piece->symbol = tetro_symbol(tetro_num);
		piece->content = tetro_new_string(tetro_clean_coordinates(tetro_get_coordinates(s, 0, 19)));
	}
	old_piece->next = piece;
	piece->next = NULL;
	return (piece);
}


void print_t_piece(t_piece *pieces)
{
	while (pieces->next != NULL)
	{
		ft_putchar(pieces->symbol);
		ft_putstr(pieces->piece);
//		ft_putnbr(pieces->boundry);
		pieces = pieces->next;
	}
	return ;
}
