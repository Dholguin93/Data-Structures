red_black_test: ../obj/IRedBlackTest.o ../obj/IRedBlackNode.o
	g++ -Wall ../obj/IRedBlackTest.o ../obj/IRedBlackNode.o -o red_black_test 

../obj/IRedBlackTest.o: IRedBlackNodeTest.cpp
	g++ -c IRedBlackNodeTest.cpp -o ../obj/IRedBlackTest.o

../obj/IRedBlackNode.o: ../src/IRedBlackNode.h ../src/IRedBlackNode.cpp
	g++ -c ../src/IRedBlackNode.cpp -o ../obj/IRedBlackNode.o

