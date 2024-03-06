# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heloufra <heloufra@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 20:11:55 by heloufra          #+#    #+#              #
#    Updated: 2022/03/15 18:52:12 by heloufra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-------------------------------- Project --------------------------------#
TARGET			=fractol
TARGET_BONUS	=fractol_bonus
CC				=cc
FLAGS			=-Wall -Werror -Wextra
INC_DIR			=-I/usr/local/include -I./include -I$(LIBFT_PATH)
LIB_DIR 		=-L$(MLX_PATH) -L$(LIBFT_PATH)
RM				=rm -fr

#------------------------ Source code files ------------------------#

#-------- Mandatory Part --------#
EVENTS		=julia_changer.c key_event.c reset.c set_events.c zoom_middle.c 
FRACTALS	=julia.c mandelbort.c
PARSING		=ft_atof.c init_data.c valid.c
UTILS		=color.c image.c plane.c print.c render.c destroy.c
SRC= $(addprefix src/utils/, $(UTILS)) $(addprefix src/events/, $(EVENTS))  \
     $(addprefix src/fractals/, $(FRACTALS)) $(addprefix src/parsing/, $(PARSING)) \
	 ./src/main.c

#-------- Bonus Part --------#
EVENTS_BONUS		=julia_changer.c key_event_bonus.c reset.c set_events_bonus.c zoom_mouse_bonus.c move_arrows_bonus.c 
FRACTALS_BONUS		=julia.c mandelbort.c burning_ship_bonus.c
PARSING_BONUS		=ft_atof.c init_data.c valid_bonus.c
UTILS_BONUS			=color.c image.c plane.c print_bonus.c render_bonus.c destroy.c
SRC_BONUS= $(addprefix src/utils/, $(UTILS_BONUS)) $(addprefix src/events/, $(EVENTS_BONUS))  \
           $(addprefix src/fractals/, $(FRACTALS_BONUS)) $(addprefix src/parsing/, $(PARSING_BONUS)) \
	 ./src/main.c

#-------- OBJS --------#
OBJS				=$(SRC:%.c=%.o)
OBJS_BONUS			=$(SRC_BONUS:%.c=%.o)

#-------- Dependencies --------#
# MinilibX
MLX_PATH	=/usr/local/lib
MLX_ARCHIVE	=$(MLX_PATH)/libmlx.a
MLX_LNK		=-lmlx -framework OpenGL -framework AppKit

# Libft
LIBFT_PATH		=./libft
LIBFT_ARCHIVE	=$(LIBFT_PATH)/libft.a
LIBFT_LNK		=-lft

#-------- Rules --------#
all: $(TARGET)

bonus: $(TARGET_BONUS)

$(TARGET): $(OBJS) $(LIBFT_ARCHIVE) $(MLX_ARCHIVE)
	$(CC) $(LIB_DIR) $(LIBFT_LNK) $(MLX_LNK) $(OBJS) -o $(TARGET)

$(TARGET_BONUS): $(OBJS_BONUS) $(LIBFT_ARCHIVE) $(MLX_ARCHIVE)
	$(CC) $(LIB_DIR) $(LIBFT_LNK) $(MLX_LNK) $(OBJS_BONUS) -o $(TARGET_BONUS)

$(LIBFT_ARCHIVE):
	make -C $(LIBFT_PATH)

src/%.o:src/%.c
	$(CC) $(FLAGS) $(INC_DIR) -c $^ -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)
	make clean -C $(LIBFT_PATH)

fclean: clean
	$(RM) $(TARGET)
	$(RM) $(TARGET_BONUS)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re