
undefined4 __thiscall FUN_361549d0(void *this,int param_1,int *param_2,int *param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_3615a300((undefined4 *)((int)this + 0x28));
  if (in_EAX < iVar1) {
    puVar5 = (undefined4 *)(*(int *)((int)this + 0x2c) + 0xc + in_EAX * 0x10);
    do {
      iVar2 = FUN_3600c450(puVar5 + -1);
      iVar3 = 0;
      if (0 < iVar2) {
        piVar4 = (int *)*puVar5;
        do {
          if (*piVar4 == param_1) {
            *param_2 = in_EAX;
            *param_3 = iVar3;
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 7;
        } while (iVar3 < iVar2);
      }
      in_EAX = in_EAX + 1;
      puVar5 = puVar5 + 4;
    } while (in_EAX < iVar1);
  }
  return 0;
}

