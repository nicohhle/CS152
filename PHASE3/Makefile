parse: mini_l.lex mini_l.y
	bison -v -d --file-prefix=y mini_l.y
	flex mini_l.lex
	g++ -std=c++11 -Wno-write-strings -o parser y.tab.c lex.yy.c -lfl

clean:
	rm -f lex.yy.c y.tab.* y.output *.o parser

CFLAGS = -g -Wall -ansi -pedantic

parsetemp: mini_l.lex temp.y
	bison -v -d --file-prefix=t temp.y
	flex mini_l.lex
	g++ -std=c++11 -Wno-write-strings -o temp t.tab.c lex.yy.c -ll

cleantemp:
	rm -f lex.yy.c t.tab.* t.output *.o parser
