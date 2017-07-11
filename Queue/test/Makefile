# Creates an executable whenever IStackTest \
 or INode object files have been manipulated
queue_test: ../obj/IQueue.o ../../Node/obj/INode.o ../obj/IQueueTest.o
	g++ ../obj/IQueue.o ../../Node/obj/INode.o ../obj/IQueueTest.o -o queue_test

# Creates an IStackTest object file whenever either
# the IStack .cpp or .h files, in addition to the IStackTest
# .cpp file changes
../obj/IQueueTest.o: ../src/IQueue.cpp ../src/IQueue.h IQueueTest.cpp
	g++ -c IQueueTest.cpp

# Creates an IStackTest object file whenever
# the IStack .cpp or .h files have been changed
../obj/IQueue.o: ../src/IQueue.cpp ../src/IQueue.h
	g++ -c ../src/IQueue.cpp

# Creates an INode object file whenever
# the INode .cpp or .h files have been changed
../../Node/obj/INode.o: ../../Node/src/INode.cpp ../../Node/src/INode.h
	g++ -c ../../Node/src/INode.cpp

# Target: Dependencies
#  ^--- Work  /INode.o -o queue_test
