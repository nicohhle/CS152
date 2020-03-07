CFLAGS = -g -Wall -ansi -pedantic

phase3: phase3.lex phase3.y
	bison -d -v phase3.y
	flex phase3.lex	
	g++ $(CFLAGS) -std=c++11 lex.yy.c phase3.tab.c -lfl -o phase3 -Wno-deprecated-register
	rm -f lex.yy.c *.output *.tab.c *.tab.h