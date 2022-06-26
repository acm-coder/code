function run() {
    if [ $1 -eq 0 ]; then
        time $2 < $3 > $4
    fi
}


if [ $# -eq 0 ]
then
    make
    run $? ./a.out in result
else
    case $1 in
        grd)
            make
            run $? ./grd gen_in in
            ;;
        std)
            for i in {0..11}
            do
                echo "./data_test/in_${i}"
                make
                run $? ./a.out  "./data_test/in_${i}" "./data_test/out_${i}"
            done
            ;;
    esac
fi