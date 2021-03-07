int		g_row;
int		g_col;
int		g_size;
int		validate_map(char *map_data);
int		get_col(char *map_data);
int		get_row(char *map_data);
char	*read_map(int map_filedes);
char	**write_map_arr(char **map_array, char *map_data);
char	**allocate_map_arr(char *map_data);
