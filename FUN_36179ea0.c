
void FUN_36179ea0(void)

{
  int in_EAX;
  
  if (*(void **)(in_EAX + 0x30) != (void *)0x0) {
    FreeMemory(*(void **)(in_EAX + 0x30));
    *(undefined4 *)(in_EAX + 0x30) = 0;
  }
  if (*(int **)(in_EAX + 0x38) != (int *)0x0) {
    FUN_36175520(*(int **)(in_EAX + 0x38));
    *(undefined4 *)(in_EAX + 0x38) = 0;
  }
  FUN_36179e30();
  return;
}

