all: cpp 

cpp:
	g++ -fPIC -shared -pthread -std=c++14 -o mylib.so -L /usr/lib/lua/5.1 -I /usr/include/lua/5.1 somelib.cc

lua51:
	gcc -fPIC -shared -pthread -std=c99 -o somelib51.so -L /usr/lib/lua/5.1 -I /usr/include/lua/5.1 somelib.c

lua52:
	gcc -fPIC -shared -pthread -std=c99 -o somelib52.so -L /usr/lib/lua/5.2 -I /usr/include/lua/5.2 somelib.c

lua53:
	gcc -fPIC -shared -pthread -std=c99 -o somelib53.so -L /usr/lib/lua/5.3 -I /usr/include/lua/5.3 somelib.c
