FILE_lex=	B053040014
PROG_lex=	lex.yy.c
FILE_yacc=	B053040014
PROG_yacc= 	y.tab.c
HEADER_yacc =   y.tab.h
all:	$(PROG_yacc) $(PROG_lex)
	gcc $(PROG_yacc) $(PROG_lex) -ly -lfl

$(PROG_yacc):	$(FILE_yacc).y
	bison -y -d $(FILE_yacc).y
$(PROG_lex):	$(FILE_lex).l
	flex $(FILE_lex).l
clean:
	rm a.out $(PROG_lex) $(PROG_yacc) $(HEADER_yacc)
