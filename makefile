project2: main.o Carts.o Customer.o Register.o
	g++ -std=c++11 -o project2 main.o Carts.o Customer.o Register.o

main.o: main.cpp Carts.h Customer.h
	g++ -std=c++11 -c main.cpp

Carts.o: Carts.cpp Carts.h
	g++ -std=c++11 -c Carts.cpp

Customer.o: Customer.cpp Customer.h
	g++ -std=c++11 -c Customer.cpp
Register.o: Register.cpp Register.h
	g++ -std=c++11 -c Register.cpp

clean:
	rm project2 main.o Carts.o Customer.o Register.o
