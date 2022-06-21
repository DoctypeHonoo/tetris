##
## EPITECH PROJECT, 2022
## B-PSU-200-MPL-2-1-tetris-guillaume.lemoine
## File description:
## Makefile
##

SRC		=	$(wildcard *.c)

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Werror -g3 -Iinclude/

BIN		=	tetris

LIB		=	./lib/libmy.a

all: $(BIN)

$(BIN): $(OBJ) $(LIB)
	@$(CC) $(OBJ) -o $(BIN) -lncurses -L./lib -lmy
	@echo "Make sucess"

$(LIB):
	@make -C ./lib/my
	@echo "Lib success"

clean:
	@$(RM) $(OBJ)
	@make clean -C ./lib/my
	@echo "clean success"

fclean: clean
	@$(RM) $(BIN)
	@make fclean -C ./lib/my
	@echo "fclean success"

re: fclean all
