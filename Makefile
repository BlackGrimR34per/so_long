SRCS    = so_long.c

OBJS    = $(SRCS:.c=.o)

NAME    = so_long

CC      = cc

# X11 path on Linux (common path)
X11_INC = /usr/include/X11
X11_LIB = /usr/lib

# MinilibX path (adjust these if needed)
MLX_INC = mlx_linux
MLX_LIB = mlx_linux

# Additional libraries needed
LIBS    = -lXext -lX11 -lm -lz

all:    $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -L. -lmlx -L$(X11_LIB) -I$(MLX_INC) -I$(X11_INC) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I$(X11_INC) -I$(MLX_INC) -O3 -c $< -o $@

# For MAC below
# SRCS	=	so_long.c

# OBJS	=	$(SRCS:.c=.o)

# NAME	=	so_long

# CC		=	cc

# all:		$(NAME)

# $(NAME):	$(OBJS)
# 			$(CC) $(CFLAGS) libmlx.a $(OBJS) -I /opt/X11/include -L /opt/X11/lib -lX11 -lXext

# %.o:		%.c
# 			$(CC) -c -Imlx $< -o $@