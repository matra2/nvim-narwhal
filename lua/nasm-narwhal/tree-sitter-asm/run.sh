
file="./test/""${1}"".asm"
tree-sitter generate && \
    nasm ${file} -f elf64 -o o && \
    tree-sitter parse ${file} && \
    rm o
