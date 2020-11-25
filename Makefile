all :
	gcc   -g  -fsanitize=address -lmlx -framework OpenGL -framework AppKit  -D BUFFER_SIZE=60\
			cub3d.c\
			open-read/ft_op_f.c\
			open-read/ft_read_var.c\
			open-read/ft_read_map.c\
			help-func/get_next_line/get_next_line.c\
			help-func/get_next_line/get_next_line_utils.c\
			help-func/ft_atoi.c\
			help-func/ft_split.c\
			help-func/ft_strncmp.c\
			help-func/ft_nbr_split.c\
			help-func/ft_is_number.c\
			help-func/ft_zeros.c\
			check/ft_check_var.c\
			check/ft_check_b_l.c\
			check/ft_check_r_c.c\
			check/ft_check_not_var.c\
			check/ft_check_txt_ex.c\
			errors/ft_err.c\
			errors/ft_err_r_c.c\
			errors/ft_err_txt.c\
			set/ft_set_r_c.c\
			set/ft_set_txt.c\
			initialization/ft_init.c\
			help-func/ft_putstr_fd.c\
			help-func/ft_lists.c\
			set/ft_store_list.c\
			set/ft_store_array.c\
			help-func/ft_realloc.c\
			help-func/ft_join_txt.c

			
			