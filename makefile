a.out: code.cpp
	g++ -std=c++11 $< -o $@ -g -fsanitize=address
