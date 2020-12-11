#include "cub3d.h"
void ft_set_init(void)
{
    g_c.bitmap = malloc(sizeof(t_bitmap));
    if (!g_c.bitmap)
        ft_err("memory problem");
    g_c.bitmap->width = g_c.w;
    g_c.bitmap->height = g_c.h;
    g_c.bitmap->bitcount = 24;
    g_c.bitmap->wi_byt = ((g_c.bitmap->width * g_c.bitmap->bitcount + 31) / 32) * 4;
	g_c.bitmap->imagesize = g_c.bitmap->wi_byt * g_c.bitmap->height;
	g_c.bitmap->bisize = 40;
	g_c.bitmap->bfoffbits = 54;
	g_c.bitmap->filesize = 54 + g_c.bitmap->imagesize;
	g_c.bitmap->biplanes = 1;
	if (!(g_c.bitmap->buf = malloc(g_c.bitmap->imagesize)))
		ft_err("Buff bitmap error");
	g_c.bitmap->row = g_c.bitmap->height - 1;
	g_c.bitmap->col = 0;
    
}


void ft_set_header(void)
{
    //g_c.bitmap->header[54] = { 0 };
	ft_memcpy(g_c.bitmap->header, "BM", 2);
	ft_memcpy(g_c.bitmap->header + 2, &g_c.bitmap->filesize, 4);
	ft_memcpy(g_c.bitmap->header + 10, &g_c.bitmap->bfoffbits, 4);
	ft_memcpy(g_c.bitmap->header + 14, &g_c.bitmap->bisize, 4);
	ft_memcpy(g_c.bitmap->header + 18, &g_c.bitmap->width, 4);
	ft_memcpy(g_c.bitmap->header + 22, &g_c.bitmap->height, 4);
	ft_memcpy(g_c.bitmap->header + 26, &g_c.bitmap->biplanes, 2);
	ft_memcpy(g_c.bitmap->header + 28, &g_c.bitmap->bitcount, 2);
	ft_memcpy(g_c.bitmap->header + 34, &g_c.bitmap->imagesize, 4);
}

int     *get_colors(int color)
{
    int     *colors;
    colors = malloc(3 * sizeof(int));
    colors[0] = ((color >> 16) & 0xFF);
    colors[1] = ((color >> 8) & 0xFF);
    colors[2] = ((color) & 0xFF);
    return (colors);
}

void ft_save()
{
    ft_set_init();
	ft_set_header();
	while (g_c.bitmap->row > 0)
	{
		while (g_c.bitmap->col < g_c.bitmap->width)
		{
			g_c.bitmap->color = get_colors(g_c.img.addr[(g_c.bitmap->height - g_c.bitmap->row)
			* g_c.bitmap->width + g_c.bitmap->col]);
			g_c.bitmap->buf[g_c.bitmap->row * g_c.bitmap->wi_byt + g_c.bitmap->col * 3 + 0] = g_c.bitmap->color[2];
			g_c.bitmap->buf[g_c.bitmap->row * g_c.bitmap->wi_byt + g_c.bitmap->col * 3 + 1] = g_c.bitmap->color[1];
			g_c.bitmap->buf[g_c.bitmap->row * g_c.bitmap->wi_byt + g_c.bitmap->col * 3 + 2] = g_c.bitmap->color[0];
			free(g_c.bitmap->color);
			g_c.bitmap->col++;
		}
		g_c.bitmap->row--;
		g_c.bitmap->col = 0;
	}
	g_c.bitmap->fd = open("cub3d.bmp", O_WRONLY | O_CREAT, 0644);
	write(g_c.bitmap->fd, g_c.bitmap->header, 54);
	write(g_c.bitmap->fd, g_c.bitmap->buf, g_c.bitmap->imagesize);
	close(g_c.bitmap->fd);
	free(g_c.bitmap->buf);
}

void	ft_err(char *message)
{
	ft_putstr_fd(message, 1);
	
	ft_failed();
}
void ft_failed()
{
	ft_free_d(g_c.map);
	ft_free_list();
	exit(EXIT_FAILURE);
}
void ft_check_save(int argc,char *argv[])
{
		ft_save();
		mlx_destroy_window(g_c.mlx, g_c.mlx_win);
	    free_exit();
		exit(EXIT_SUCCESS);
    
}