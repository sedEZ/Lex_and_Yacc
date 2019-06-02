FILE_lex = calc.lex
PROG_lex = lex.yy.c
FILE_yacc = calc.y
PROG_yacc = y.tab.c
all: $(PROG_lex) $(PROG_yacc)
	gcc $(PROG_lex) $(PROG_yacc) -lm -ly -lfl
$(PROG_lex):	$(FILE_lex)
	flex $(FILE_lex)
$(PROG_yacc):	$(FILE_yacc)
	bison -y -d $(FILE_yacc)
clean:
	rm -f a.out $(PROG_yacc) $(PROG_lex) y.tab.h
