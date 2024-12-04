#include "so_long.h"

const char	*ft_get_filename_from_path(const char *path) 
{
	const char	*filename;

	filename = strrchr(path, '/');
	if (filename)
		return (filename + 1);
	else
	{
		ft_free_map_error(game, "Error: wrong inputs in the map.\n");
	}
}

void	ft_check_map_format(t_game *game) 
{
	size_t		len;
	const char	*filename;
	size_t		filename_len;

	len = ft_strlen(game->txt);
	filename = ft_get_filename_from_path(game->txt);
	filename_len = ft_strlen(filename);
	if (filename_len > 4)
	{
		if (ft_strcmp(&filename[filename_len - 4], ".ber") == 0)
		{
			if (filename[filename_len - 5] != '\0')
				return ;
		}
	}
}
