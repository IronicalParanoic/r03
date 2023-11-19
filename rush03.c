/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 07:47:35 by mburova           #+#    #+#             */
/*   Updated: 2023/11/19 08:05:48 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"

void    ft_putchar (char a);

void    rush(int x, int y)
{
        int     hor;
        int     ver;

        if (x < 1 || y < 1)
                return;
        ver = 1;
        hor = 1;
        while (ver <= y)
        {
                while (hor <= x)
                {
                        if (ver = 1 && hor = 1) || (ver = y && hor = 1)
                                ft_putchar('A');
                        else if (ver = 1 && hor = x) || (ver = y && hor = x)
                                ft_putchar('C');
                        else if (ver > 1 && ver < y && hor > 1 && hor < x)
                                ft_putchar(' ');
                        else
                                ft_putchar('B');
                        hor++;
                }
                ver++;
        }
