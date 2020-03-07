parse: phase2.lex
	flex phase2.lex
	bison -v -d --file-prefix=y phase2.y
	g++ -o phase2 -x c++ y.tab.c lex.yy.c -ll -std=c++11 -Wno-deprecated-register
	rm -f lex.yy.c y.tab.h y.tab.c y.output