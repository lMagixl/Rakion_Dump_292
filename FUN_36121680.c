
void __thiscall FUN_36121680(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0xe68) = 0;
    do {
      *param_1 = 0x7fffffff;
      param_1 = (undefined4 *)param_1[4];
    } while (param_1 != (undefined4 *)0x0);
    iVar2 = FUN_3611f5c0(0x362fcb38);
    puVar1 = (undefined4 *)(iVar2 * 0x10 + -0x10 + DAT_362fcb3c);
    puVar3 = (undefined4 *)(DAT_362fcb3c + 0x10);
    puVar4 = puVar3;
    do {
      if (*(int *)puVar3[2] != 0x7fffffff) {
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
        puVar4[3] = puVar3[3];
        puVar4 = puVar4 + 4;
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 <= puVar1);
    DAT_362fcb40 = (int)puVar4 - DAT_362fcb3c >> 4;
  }
  return;
}

