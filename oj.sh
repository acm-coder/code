function do_case() {
    case $1 in
        code_st)
            git checkout -- code.cpp
            ;;
        all_st)
            git checkout .
            ;;
        grd)
            ./compile.sh grd
            ;;
        std)
            ./compile.sh std
            ;;
        *)
            ./compile.sh
            ./diff.sh
            ;;
    esac
}

base_dir=`dirname $0`
cd $base_dir
base_dir=`pwd`

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
