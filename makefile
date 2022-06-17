a.out: code.cpp
	# g++ -std=c++11 $< -o $@ -g -fsanitize=address
	g++ -std=c++11 $< -o $@ -W{all,extra,pedantic}

grd: data_generate.cpp
	g++ -std=c++11 $< -o $@ -W{all,extra,pedantic}