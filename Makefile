all: euler3 euler4 euler5

euler3: euler3.cc
	g++ -o euler3 euler3.cc -Iinclude/ -I.

euler4: euler4.cc
	g++ -o euler4 euler4.cc -Iinclude/ -I.

euler5: euler5.cc
	g++ -o euler5 euler5.cc

euler6: euler6.cc
	g++ -o euler6 euler6.cc

euler7: euler7.cc
	g++ -o euler7 euler7.cc

euler8: euler8.cc
	g++ -o euler8 euler8.cc

euler9: euler9.cc
	g++ -o euler9 euler9.cc

euler10: euler10.cc
	g++ -o euler10 euler10.cc -Iinclude/ -I.

euler11: euler11.cc
	g++ -o euler11 euler11.cc -Iinclude/ -I.

euler12: euler12.cc
	g++ -o euler12 euler12.cc -Iinclude/ -I.

euler13: euler13.cc
	g++ -o euler13 euler13.cc -Iinclude/ -I.

clean:
	rm -rf *.exe *.o
