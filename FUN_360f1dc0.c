
void __thiscall FUN_360f1dc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar5 = 0x80;
    uVar1 = 1;
    uVar2 = 0x100;
  }
  else {
    uVar5 = 4;
    uVar1 = 2;
    uVar2 = 8;
  }
  uVar5 = uVar5 | uVar1;
  if ((int)param_2 <= (int)DAT_362a631c) {
    uVar5 = uVar5 | uVar2;
  }
  param_3 = param_1;
  uVar6 = param_2;
  if ((int)DAT_362a631c < (int)param_2) {
    do {
      piVar3 = (int *)FUN_360ff4d0();
      iVar4 = *(int *)((int)this + 0x14) + 1;
      *(int *)((int)this + 0x14) = iVar4;
      FUN_360fe960(piVar3,param_3,DAT_362a631c,uVar5,iVar4,*(undefined2 *)((int)this + 0xe),param_2)
      ;
      piVar3[0x107] = *(int *)((int)this + 8);
      *(undefined2 *)(piVar3 + 0x108) = *(undefined2 *)((int)this + 0xc);
      *(undefined2 *)((int)piVar3 + 0x422) = *(undefined2 *)((int)this + 0xe);
      FUN_360ff1a0((void *)((int)this + 0x18),piVar3,1,0);
      uVar5 = uVar5 & uVar1;
      uVar6 = uVar6 - DAT_362a631c;
      param_3 = (undefined4 *)((int)param_3 + DAT_362a631c);
    } while ((int)DAT_362a631c < (int)uVar6);
  }
  piVar3 = (int *)FUN_360ff4d0();
  iVar4 = *(int *)((int)this + 0x14) + 1;
  *(int *)((int)this + 0x14) = iVar4;
  FUN_360fe960(piVar3,param_3,uVar6,uVar2 | uVar5,iVar4,*(undefined2 *)((int)this + 0xe),param_2);
  piVar3[0x107] = *(int *)((int)this + 8);
  *(undefined2 *)(piVar3 + 0x108) = *(undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)piVar3 + 0x422) = *(undefined2 *)((int)this + 0xe);
  FUN_360ff1a0((void *)((int)this + 0x18),piVar3,1,0);
  return;
}

