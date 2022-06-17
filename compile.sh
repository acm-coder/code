if [ $# -eq 0 ]
then
    make && ./a.out < in > result
else
    make $1 && ./grd < gen_in > in
fi