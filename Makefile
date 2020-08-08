CXX = g++
CXXFLAGS = -Wall -g

all: tracker_test

tracker_test: test.cpp ActivityTracker/*.cpp ActivityTracker/*.hpp
	$(CXX) $(CXXFLAGS) -o tracker_test $^

test: tracker_test
	./tracker_test

clean:
	rm -f tracker_test
