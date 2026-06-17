
void FUN_36151b40(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_361508f0(*(void **)(in_EAX + 0xb14),in_EAX);
  FUN_361508f0(*(void **)(in_EAX + 0xb20),in_EAX);
  FUN_36151940((int *)(in_EAX + 0xb28));
  iVar1 = 0x12;
  do {
    if (*(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_3623c06c)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + iVar1 * 3 + 0x11;
  return;
}

