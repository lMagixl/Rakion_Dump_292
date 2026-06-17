
void __thiscall FUN_36123350(void *this,int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)((int)this + 0xd40) != 0) {
    iVar2 = FUN_3611f7f0(0x362fcac4);
    if (iVar2 - DAT_362fcad8 < 1) {
      FUN_36121f50(&DAT_362fcac4,DAT_362fcadc);
    }
    iVar2 = DAT_362fcad8;
    DAT_362fcad8 = DAT_362fcad8 + 1;
    puVar3 = (undefined4 *)FUN_3611fd00(&DAT_362fcac4,iVar2);
    *puVar3 = param_2;
    puVar3[1] = param_3;
    puVar3[2] = param_1;
    return;
  }
  if (*(char *)(param_1 + 0x101) == '\0') {
    *(undefined1 *)(param_1 + 0x101) = 1;
    FUN_3611d510(this,param_1);
    FUN_36117840(this,param_1);
    uVar5 = *param_2 + 0xffffU >> 0x10;
    uVar4 = *param_3 + 0xffffU >> 0x10;
    *(uint *)(param_1 + 0x11c) = uVar4;
    *(uint *)(param_1 + 0x114) = uVar5;
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)((int)this + 0xe5c);
    uVar1 = *(undefined4 *)((int)this + 0xe5c);
    *(uint *)(param_1 + 0x124) = uVar4 - uVar5;
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    return;
  }
  uVar6 = *param_2 + 0xffffU >> 0x10;
  uVar5 = *param_3 + 0xffffU >> 0x10;
  uVar4 = *(uint *)(param_1 + 0x114);
  if ((int)uVar6 < (int)*(uint *)(param_1 + 0x114)) {
    uVar4 = uVar6;
  }
  *(uint *)(param_1 + 0x114) = uVar4;
  uVar4 = *(uint *)(param_1 + 0x11c);
  if ((int)*(uint *)(param_1 + 0x11c) < (int)uVar5) {
    uVar4 = uVar5;
  }
  *(uint *)(param_1 + 0x11c) = uVar4;
  iVar2 = *(int *)((int)this + 0xe5c);
  if (*(int *)(param_1 + 0x118) <= *(int *)((int)this + 0xe5c)) {
    iVar2 = *(int *)(param_1 + 0x118);
  }
  *(int *)(param_1 + 0x118) = iVar2;
  iVar2 = *(int *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x120) < *(int *)((int)this + 0xe5c)) {
    iVar2 = *(int *)((int)this + 0xe5c);
  }
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + (uVar5 - uVar6);
  *(int *)(param_1 + 0x120) = iVar2;
  return;
}

