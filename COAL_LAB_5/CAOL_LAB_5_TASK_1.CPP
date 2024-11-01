.model small
.stack 100h
.data

var1 db 5
arr db 4,1,3,5,6,7
arr2 db 'a','b','c','d'

.code
     main proc
      mov ax,@data
      mov ds,ax  
        
      lea Si,arr
      mov dx, [Si]
      add dl,48  
      mov ah,2
      int 21h 
      
      inc Si
     
      mov dx, [Si]  
      add dl,48  
      mov ah,2
      int 21h   
      
      inc Si
     
      mov dx, [Si]
      add dl,48  
      mov ah,2
      int 21h 
      
      inc Si
     
      mov dx, [Si]
      add dl,48  
      mov ah,2
      int 21h 
      
      inc Si
     
      mov dx, [Si]
      add dl,48  
      mov ah,2
      int 21h 
      
      inc Si
     
      mov dx, [Si]
      add dl,48  
      mov ah,2
      int 21h 
        
     main endp   
end main
