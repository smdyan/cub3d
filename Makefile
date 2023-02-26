NAME = cub3D

SRCS_DIR = srcs
OBJS_DIR = objs

SRCS_MF = 	main.c utils.c\
			parsing.c parse_identifiers.c parse_colors.c\
			parse_map.c check_map.c\
			clear.c\
			mlx.c render.c\
			raycasting.c\
			draw_elements.c textures.c\
			draw.c keys.c\
			move.c rotate.c

OBJS_M = $(addprefix $(OBJS_DIR)/, $(patsubst %.c,%.o, $(SRCS_MF)))
D_FILES_M = $(addprefix $(OBJS_DIR)/, $(patsubst %.c,%.d, $(SRCS_MF)))

INCLUDES = -I./includes/ -I ./mlx -I libft/includes
MLX = -Lmlx -lmlx -framework OpenGL -framework AppKit
MLX_FOLDER = ./mlx
ADD_DEF = -D DARWIN_KEYS

LIBFT = ./libft/libft.a
LIB_INC = -L./libft/ -lft

OPFLAGS = -O2
CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY : all lib clean fclean re

all : lib $(NAME)

$(OBJS_DIR) :
	mkdir $@

lib :
	make -C libft/

$(NAME) : $(OBJS_M) $(LIBFT)
	make -C $(MLX_FOLDER)
	$(CC) $(CFLAGS) $(OPFLAGS) $(OBJS_M) $(LIB_INC) $(MLX) -o $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(OPFLAGS) $(INCLUDES) $(ADD_DEF) -c $< -o $@ -MD

clean :
	make -C libft/ $@
	make -C $(MLX_FOLDER) $@
	rm -rf $(OBJS_DIR)

fclean : clean
	make -C libft/ $@
	rm -f $(NAME)

re : fclean all

-include $(D_FILES_M)
