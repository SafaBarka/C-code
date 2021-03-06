NAME = cub3D

CFLAGS =  -Wall -Wextra -Werror


$(NAME):
		gcc  \
			ft_cub3d.c\
			ft_read_var.c\
			ft_read_map.c\
			ft_check_map.c\
			help-func/get_next_line/get_next_line.c\
			help-func/get_next_line/get_next_line_utils.c\
			help-func/ft_split.c\
			ft_err_txt.c\
			ft_check_c.c\
			ft_check_r.c\
			ft_check_f.c\
			ft_init.c\
			ft_sort.c\
			help-func/ft_lists.c\
			set/ft_store_array.c\
			set/ft_set_txts.c\
			ft_free.c\
			raycasting/ft_cast.c\
			raycasting/ft_set_distance.c\
			ft_render_walls.c\
			ft_update.c\
			ft_check_spaces.c\
			ft_save.c\
			help-func/ft_number.c\
			help-func/ft_stringone.c\
			help-func/ft_stringtwo.c\
			ft_sprite.c\
		-I /usr/local/include -L /usr/local/bin -lmlx -framework OpenGl -framework AppKit libmlx.dylib -D BUFFER_SIZE=60\
		-o $(NAME)

all : $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
