/* ************************************************************************** */
/*                                                                            */
/*       ::::::    ::::::   :::  ::::::::  ::::::::   :::  ::::::    :::::::  */
/*     :+:   :+: :+:   :+: :+: :+:   :+:  :+:    :+: :+: :+:   :+: :+:    :+: */
/*    +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+  */
/*   +#+       +:+       +#+ +:+   +#+  +:+    +#+ +:+ +#+       +#+:+:+#+:   */
/*  +#+       +#+       +#+   +#+#+#+# #+#+#+#+   +#+ +#+       +#+           */
/* #+#   #+# #+#   #+# #+#            #+#    #+# #+# #+#   #+# #+#    #+#     */
/*  ######    ######  ############## ###    ### ###   ######    #######       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   p2b_sort.c                               cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/05/28 12:58:35  /  2021/05/28 12:58:38 @cclarice   */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   One stack swap sort                                                      */
/*                                                                            */
/*   Using only stack a for sorting                                           */
/*                                                                            */
/* ************************************************************************** */

void	p2b_sort(t_sort *sort)
{
	
}

void	init_sort(t_sort *sort)
{
	t_elem	*ptr;

	sort->cc = 1;
	sort->cb = 0;
	ptr = sort->a;
	while (ptr->n && ++sort->cc)
		ptr = ptr->n;
	sort->ca = sort->cc;
	self_sort(sort);
}