CC := g++
CFLAGS := -c -Wall -Iinclude

clean:
	rm -f *.o && cd build && rm -f * -r * && cd ..

all: ui.o libcalc.a
	$(CC) ui.o libcalc.a -o $@

libcalc.a: calculator.o
	ar rcs $@ $^

ui.o: ui.cpp calculator.h
	$(CC) $(CFLAGS) ui.cpp -o $@

calculator.o: calculator.cpp calculator.h
	$(CC) $(CFLAGS) calculator.cpp -o $@
