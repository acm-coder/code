if [ $# -eq 0 ]
then
    make && ./a.out < in > result
else
    case $1 in
        grd)
            make $1 && ./grd < gen_in > in
            ;;
        std)
            for i in {0..11}
            do
                echo "./data_test/in_${i}"
                make && ./a.out < "./data_test/in_${i}" > "./data_test/out_${i}"
            done
            ;;
    esac
fi