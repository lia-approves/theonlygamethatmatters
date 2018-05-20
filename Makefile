CXX = g++
CXXFlags = -std=c++11 -Wall -Wextra
BINARIES = run_me
OBJS = run_me.o

run_me.o: run_me.cc
run_me: run_me.o

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

%: %.o
	$(CXX) $^ -o $@

clean:
	/bin/rm -f $(BINARIES) *.o *~

