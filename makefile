# args = -W{all,extra,pedantic}

a.out: code.cpp
	# g++ -std=c++11 $< -o $@ -g -fsanitize=address
	g++ -std=c++11 $< -o $@ ${args} -g

grd: data_generate.cpp
	g++ -std=c++11 $< -o $@ ${args} -g