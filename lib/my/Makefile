##
## EPITECH PROJECT, 2022
## B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
## File description:
## Makefile
##

AR				=	ar
ARFLAGS			=	rsc libmy.a *.o

all: make_lib

make_lib:
	@$(CC) *.c -c
	@$(AR) $(ARFLAGS)
	@cp libmy.a ../libmy.a
	@echo "LIB Done"

clean:
	@$(RM) *.o
	@echo "clean lib success"

fclean: clean
	@$(RM) ../libmy.a
	@$(RM) libmy.a
	@echo "fclean lib success"

re: fclean all
