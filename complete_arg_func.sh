#!/bin/bash

# 定义补全函数
_complete() {
    COMPREPLY=() # 初始化补全答复数组
    cur="${COMP_WORDS[COMP_CWORD]}" # 当前的单词

    # 读取环境变量中的补全选项
    IFS=' ' read -r -a opts <<< "${COMP_OPTS}"

    # 使用 compgen 生成补全选项
    COMPREPLY=($(compgen -W "${opts[*]}" -- "$cur"))
    return 0
}

_my_complete() {
    COMPREPLY=() # 初始化补全答复数组
    cur="${COMP_WORDS[COMP_CWORD]}" # 当前的单词

    # 读取环境变量中的补全选项
    opts="code_st all_st grd std"
    # 使用 compgen 生成补全选项
    COMPREPLY=($(compgen -W "${opts}" -- "$cur"))
    return 0
}
# 注册补全函数并指定补全选项
# 注意：这里我们没有直接传递选项到_complete函数，而是设置了环境变量
# COMP_OPTS="st_code st_all grd std" complete -F _complete oj.sh
# complete -F _my_complete oj.sh
complete -W "st_code st_all grd std" oj.sh
