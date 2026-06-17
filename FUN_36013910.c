
void FUN_36013910(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_361bf99c(0xac);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x2a) = 1;
  *(undefined1 *)((int)puVar1 + 0xa9) = 0;
  return;
}

