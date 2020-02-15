parse: $(p).lex
	flex $(p).lex
	gcc lex.yy.c -lfl
	rm -f lex.yy.c

test:
	cat $(t).min | ./a.out > output
	diff output $(t).tokens
