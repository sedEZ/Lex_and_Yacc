FILE_lex=	B053040014.lex
PROG_lex=	lex.yy.c
all:	$(PROG_lex)
	gcc $(PROG_lex) -lfl

$(PROG_lex):	$(FILE_lex)
	flex $(FILE_lex)

clean:
	rm a.out $(PROG_lex)
