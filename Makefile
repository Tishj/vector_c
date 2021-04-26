# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/03/19 18:02:35 by tbruinem      #+#    #+#                  #
#    Updated: 2021/04/26 11:40:38 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =	libvec.a

CFLAGS = -Wall -Wextra -Werror

ifeq ($(DEBUG),1)
	CFLAGS += -g -fsanitize=address
endif

SRC_DIR =	src/
OBJ_DIR =	obj/
INC_DIR =	incl

CPPFLAGS = -I $(INC_DIR)
ARFLAGS =	-rcs

SRC =	util/util_atoi.c \
		util/util_strlen.c \
		util/util_bzero.c \
		util/util_strdup.c \
		util/util_memcpy.c \
		util/util_memcmp.c \
		util/util_memdup.c \
		util/util_strncmp.c \
		util/util_strnlen.c \
		util/util_strncpy.c \
		util/util_swap.c \
		vector.c \
		vec_new.c \
		vec_getref.c \
		vec_destroy.c

OBJ :=	$(SRC:%.c=$(OBJ_DIR)%.o)
SRC :=	$(SRC:%.c=$(SRC_DIR)%.c)

all: $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< $(CPPFLAGS) -o $@

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
