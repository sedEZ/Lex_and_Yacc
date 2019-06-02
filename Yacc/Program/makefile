FILE_lex=	b
PROG_lex=	lex.yy.c
FILE_yacc=	a
PROG_yacc= 	y.tab.c
HEADER_yacc =   y.tab.h
all:	$(PROG_yacc) $(PROG_lex)
	gcc $(PROG_yacc) $(PROG_lex) -ly -lfl

lex:	$(PROG_lex)
        gcc $(PROG_lex) -lfl

yacc:	$(PROG_yacc) $(PROG_lex)
        gcc $(PROG_yacc) $(PROG_lex) -ly -lfl

$(PROG_yacc):	$(FILE_yacc).y
	bison -y -d $(FILE_yacc).y
$(PROG_lex):	$(FILE_lex).lex
	flex $(FILE_lex).lex
clean:
	rm a.out $(PROG_lex) $(PROG_yacc) $(HEADER_yacc)
