
void __thiscall FUN_361155f0(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_3600be20((undefined4 *)(param_1 + 4));
  *(byte *)(param_2 + 0x102) = (byte)param_3 & 2;
  iVar1 = iVar3 * 2;
  *(int *)(param_2 + 0x108) = iVar1;
  uVar4 = FUN_36026a70(0x362fcaf0);
  *(undefined4 *)(param_2 + 0x104) = uVar4;
  iVar7 = DAT_362fcaf8 + iVar1;
  DAT_362fcaf8 = iVar7;
  iVar5 = FUN_3600bef0(&DAT_362fcaf0);
  if (iVar5 < iVar7) {
    iVar7 = FUN_3600bef0(&DAT_362fcaf0);
    FUN_36026aa0(&DAT_362fcaf0,iVar7 + ((iVar1 + -1) / DAT_362fcafc + 1) * DAT_362fcafc);
    iVar7 = DAT_362fcaf8;
  }
  iVar5 = 0;
  iVar1 = DAT_362fcaf4 + (iVar7 + iVar3 * -2) * 4;
  if (0 < iVar3) {
    do {
      iVar7 = iVar5 * 8;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 8) + iVar7) + 8);
      if (*(uint *)(*(int *)(param_1 + 8) + iVar7 + 4) == (param_3 & 1)) {
        *(int *)(iVar7 + iVar1) = *piVar2 + *(int *)((int)this + 0xd78);
        iVar6 = piVar2[1];
      }
      else {
        *(int *)(iVar7 + iVar1) = piVar2[1] + *(int *)((int)this + 0xd78);
        iVar6 = *piVar2;
      }
      iVar5 = iVar5 + 1;
      *(int *)(iVar7 + 4 + iVar1) = iVar6 + *(int *)((int)this + 0xd78);
    } while (iVar5 < iVar3);
  }
  return;
}

