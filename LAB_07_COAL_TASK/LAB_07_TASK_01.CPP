.model small
.stack 100h

.data
    original db "RIPHAH INTERNATIONAL UNIVERSITY ISLAMABAD.$" ,0  
    msg1 db "Original String: $", 0Dh, 0Ah, 0 
    msg2 db "Reversed String: $", 0Dh, 0Ah, 0
    newline db 0Dh, 0Ah, '$'                 

.code
main proc
    mov ax, @data
    mov ds, ax
    mov ah, 09h              
    lea dx, [msg1]           
    int 21h

    lea dx, [original]        
    int 21h                  

    lea dx, [newline]
    int 21h
    lea si, [original]        
    mov cx, 0                 

count_loop:
    mov al, [si]              
    cmp al, "$"               
    je done_counting          
    push ax                   
    inc si                    
    inc cx                    
    jmp count_loop            

done_counting:
    mov ah, 09h               
    lea dx, [msg2]            
    int 21h

reverse_stack:
    pop ax                    
    mov dl, al                

    mov ah, 02h               
    int 21h                   

    loop reverse_stack        

    lea dx, [newline]
    int 21h

done_printing:
    mov ah, 4Ch               
    int 21h

main endp
end main