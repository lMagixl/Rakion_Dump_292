
void __cdecl FUN_36115a50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_362fb894;
  do {
    iVar3 = 0;
    iVar1 = FUN_3611f430((int)puVar4);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        if (*(int *)(puVar4[1] + 8 + iVar1) == param_1) {
          *(undefined4 *)(puVar4[1] + iVar1 + 8) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x38;
        iVar2 = FUN_3611f430((int)puVar4);
      } while (iVar3 < iVar2);
    }
    puVar4 = puVar4 + 0x3f8;
  } while ((int)puVar4 < 0x362fd854);
  return;
}

