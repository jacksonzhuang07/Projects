A1:	main.o Account.o Bank.o CustArray.o Customer.o
	g++ -o A1	main.o Account.o Bank.o CustArray.o Customer.o

main.o:	main.cc Bank.h Customer.h CustArray.h Account.h
	g++ -c main.cc

Account.o:	Account.cc Account.h Customer.h
	g++ -c Account.cc

Bank.o:	Bank.cc Bank.h CustArray.h Customer.h Account.h
		g++ -c Bank.cc

CustArray.o:	CustArray.cc CustArray.h Customer.h Account.h
		g++ -c CustArray.cc

Customer.o:	Customer.cc Customer.h Account.h
		g++ -c Customer.cc

clean:
	rm -f *.o A1
