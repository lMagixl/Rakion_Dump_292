
void __thiscall FUN_3603a890(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_18;
  int iStack_8;
  int iStack_4;
  
  iVar2 = FUN_3603a830((int)this);
  uVar3 = (**(code **)((int)this + 4))(param_2);
  uVar3 = FUN_3603a840(this,uVar3);
  iStack_18 = 0;
  if (0 < iVar2) {
    do {
      iVar6 = (int)(iStack_18 + uVar3) % iVar2;
      iVar7 = 0;
      iVar1 = *(int *)((int)this + 0x18);
      do {
        if (*(int *)(iVar1 + iVar6 * 0x14 + iVar7 * 4) == -1) goto LAB_3603a92f;
        iStack_8 = iVar6;
        iStack_4 = iVar7;
        uVar4 = FUN_3603a860(this,&iStack_8);
        iVar5 = (**(code **)this)(uVar4,param_2);
        if (iVar5 != 0) {
          *param_1 = iVar6;
          param_1[1] = iStack_4;
          return;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 5);
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < iVar2);
  }
LAB_3603a92f:
  *param_1 = -1;
  param_1[1] = -1;
  return;
}

