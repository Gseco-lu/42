/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:28:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/09/21 19:29:52 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_map_name(char *map)
{
	int	fd;
	int	len;

	len = ft_strlen(map);
	fd = open(map, O_DIRECTORY);
	if (fd >= 0 && (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
			|| map[len - 2] != 'e' || map[len - 1] != 'r'))
		ft_printf("error .ber \n");
	fd = open(map, O_RDONLY);
	if (fd < 0 && (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
			|| map[len - 2] != 'e' || map[len - 1] != 'r'))
		ft_printf("error .ber \n");
	if (len < 4 || map[len - 4] != '.' || map[len - 3] != 'b'
		|| map[len - 2] != 'e' || map[len - 1] != 'r')
		ft_printf("error .ber \n");
	close (fd);
}
