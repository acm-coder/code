function do_case() {
    case $1 in
        st_code)
            git checkout -- code.cpp
            ;;
        st_all)
            git checkout .
            ;;
        *)
            ./compile.sh
            ./diff.sh
            ;;
    esac
}

for arg in "$@"
do
    do_case $arg
done
