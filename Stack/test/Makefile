# Creates an executable whenever IStackTest \
 or INode object files have been manipulated
stack_test: ../obj/IStack.o ../../Node/obj/INode.o ../obj/IStackTest.o
	g++ ../obj/IStack.o ../../Node/obj/INode.o ../obj/IStackTest.o -o stack_test

# Creates an IStackTest object file whenever either
# the IStack .cpp or .h files, in addition to the IStackTest
# .cpp file changes 
../obj/IStackTest.o: ../src/IStack.cpp ../src/IStack.h IStackTest.cpp
	g++ -c ../src/IStackTest.cpp

# Creates an IStackTest object file whenever
# the IStack .cpp or .h files have been changed
../obj/IStack.o: ../src/IStack.cpp ../src/IStack.h
	g++ -c ../src/IStack.cpp

# Creates an INode object file whenever
# the INode .cpp or .h files have been changed 
../../Node/obj/INode.o: ../../Node/src/INode.cpp ../../Node/src/INode.h 
	g++ -c ../../Node/src/INode.cpp

# Target: Dependencies
#  ^---	Work 

