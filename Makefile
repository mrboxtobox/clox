build:
	gcc -o bin/clox *.c

run: build
	./bin/clox

clean:
	rm -f bin/clox
