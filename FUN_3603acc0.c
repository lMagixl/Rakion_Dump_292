
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3603acc0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  do {
    iVar2 = FUN_3603a830((int)this);
    uVar3 = (**(code **)((int)this + 4))(param_1);
    uVar3 = FUN_3603a840(this,uVar3);
    iVar4 = FUN_3603a820((int)this);
    if (((float)iVar4 / (float)(iVar2 * 5) <= _DAT_36226674) && (0 < iVar2)) {
      iVar4 = 0;
      do {
        iVar5 = 0;
        iVar1 = *(int *)((int)this + 0x18) + ((int)(iVar4 + uVar3) % iVar2) * 0x14;
        do {
          if (*(int *)(iVar1 + iVar5 * 4) == -1) {
            *(undefined4 *)(iVar1 + iVar5 * 4) = param_2;
            *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
            return;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 5);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    FUN_3603ac70((int)this);
    (**(code **)((int)this + 8))();
  } while( true );
}

