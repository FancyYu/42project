#include <mlx.h>

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
    char    *path = "./img/05_apple_pie.png";
    int     width;
    int     height;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "Hello world!");
	// img.img = mlx_new_image(mlx, 1920, 1080);
	// img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
	// 							&img.endian);

	// mlx_pixel_put(mlx, mlx_win, 50, 50, 0x00FF0000);
    //mlx_string_put(mlx, mlx_win, 50, 50, 0x00FF0000, "hello");
    img = mlx_png_file_to_image(mlx, path, &width, &height);
	mlx_put_image_to_window(mlx, mlx_win, img, 50, 50);
	mlx_loop(mlx);
}