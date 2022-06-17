function do_case() {
    case $1 in
        st_code)
            git checkout -- code.cpp
            ;;
        st_all)
            git checkout .
            ;;
        grd)
            ./compile.sh grd
            ;;
        *)
            ./compile.sh
            ./diff.sh
            ;;
    esac
}

if [ $# -eq 0 ]
then
    ./compile.sh
    ./diff.sh
else
    for args in $@
    do
        do_case $args
    done
fi
