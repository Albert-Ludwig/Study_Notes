  .text
  .globl main
  main:
    mov x8, #64
    mov x0, #1
    adr x1, msg
    mov x2, 13
    svc #0
    ret

  msg:
  .ascii "hello world\n"
