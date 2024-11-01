.model small
.stack 100h
.data
    
    Var1 DB 23        ; Initialize Var1 with 23
    Var2 DB 65        ; Initialize Var2 with 65

.code
main proc
    mov ax, @data
    mov ds, ax

   
    ; Swap the values of Var1 and Var2
    mov al, Var1
    mov bl, Var2
    mov Var1, bl
    mov Var2, al


    ; Exit program
    mov ah, 4Ch
    int 21h

    endp


end main
