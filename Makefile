all:
	 g++ ./src/ising.cpp ./test/ising_test.cpp -isystem /home/zhe/ME2018/googletest/googletest/include  /home/zhe/ME2018/googletest/googletest/make/gtest-all.o -lpthread -o test.out
