		  global    main

	          section   .text
		  extern    printf
main:	   	  mov       esi, message
	          mov       edi, fmt
	          mov       eax, 0	 ;printf is varargs, so EAX counts # of non-integer arguments being passed
		  call printf
		  mov ebx, 0      	 ; normal-exit code
	          mov eax, 1      	 ; process-termination service

	          section   .data
message:	  db        "Hello, Holberton", 10 ; note the newline at the end
fmt:		  db 	    "%s", 0
