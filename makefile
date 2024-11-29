
main:main.c
	g++ -o $@ $^
#g++ -o main.c main

clean:
	rm -f main

