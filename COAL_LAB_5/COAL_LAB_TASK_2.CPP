 .model small      
.stack 100h
.data
msg DB "The result is: $"      
result DB ?                    

.code
main proc
    mov ax, @data
    mov ds, ax
    lea dx, msg                
    mov ah, 9                  
    int 21h                    
    mov al, 3                  
    add al, 5                  
    sub al, 2                
    sub al, 1                 
    add al, 3

    add al, '0'             
    mov dl, al                 
    mov ah, 2                
    int 21h                 
    mov ah, 4Ch             
    int 21h

main endp
end main

