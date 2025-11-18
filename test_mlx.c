#include "minilibx_opengl_20191021/mlx.h"
#include <stdlib.h>

int	main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	if (!mlx)
		return (1);
	win = mlx_new_window(mlx, 1280, 800, "for title");
	if (!win)
		return (1);
	mlx_loop(mlx);
	return (0);
}
