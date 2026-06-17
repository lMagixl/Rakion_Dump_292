
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36118840(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 local_4;
  
  _DAT_362fcb44 = 0x100;
  _DAT_362fcb34 = 0x100;
  DAT_362fcb40 = 0;
  DAT_362fcb30 = 0;
  uVar6 = FUN_361bfd6c();
  *(int *)(param_1 + 0xe6c) = (int)uVar6;
  *(undefined4 *)(param_1 + 0xe70) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xeac);
  *(undefined4 **)(param_1 + 0xe74) = puVar1;
  iVar5 = DAT_362fcb40 + 1;
  DAT_362fcb40 = iVar5;
  iVar4 = FUN_3611fa00(&DAT_362fcb38);
  if (iVar4 < iVar5) {
    iVar5 = FUN_3611fa00(&DAT_362fcb38);
    FUN_361221a0(&DAT_362fcb38,iVar5 + _DAT_362fcb44);
    iVar5 = DAT_362fcb40;
  }
  puVar2 = (undefined4 *)(iVar5 * 0x10 + -0x10 + DAT_362fcb3c);
  *puVar2 = (int)uVar6;
  puVar2[1] = 0;
  puVar2[2] = param_1 + 0xe6c;
  puVar2[3] = local_4;
  uVar6 = FUN_361bfd6c();
  *(undefined4 *)(param_1 + 0xe8c) = (int)uVar6;
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 **)(param_1 + 0xe94) = puVar1;
  uVar3 = *(undefined4 *)(param_1 + 0xe90);
  DAT_362fcb40 = DAT_362fcb40 + 1;
  iVar5 = FUN_3611fa00(&DAT_362fcb38);
  if (iVar5 < DAT_362fcb40) {
    iVar5 = FUN_3611fa00(&DAT_362fcb38);
    FUN_361221a0(&DAT_362fcb38,iVar5 + _DAT_362fcb44);
  }
  puVar2 = (undefined4 *)(DAT_362fcb40 * 0x10 + -0x10 + DAT_362fcb3c);
  *puVar2 = (int)uVar6;
  puVar2[1] = uVar3;
  puVar2[2] = (undefined4 *)(param_1 + 0xe8c);
  puVar2[3] = local_4;
  *puVar1 = 0xc97423f0;
  *(undefined4 *)(param_1 + 0xeb0) = 0;
  *(undefined4 *)(param_1 + 0xeb4) = 0;
  *(int *)(param_1 + 0xfa8) = param_1 + 0xe6c;
  *(undefined4 *)(param_1 + 0xfa4) = 1;
  *(undefined4 *)(param_1 + 0xf94) = 0;
  *(undefined1 *)(param_1 + 0xfac) = 0;
  *(undefined4 *)(param_1 + 0xf84) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x98);
  *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xf70) = 0;
  *(undefined4 *)(param_1 + 0xf74) = 0;
  *(undefined4 *)(param_1 + 0xf78) = 0;
  *(undefined4 *)(param_1 + 0xf7c) = 0;
  *(undefined4 *)(param_1 + 0xf88) = 0x80000000;
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(param_1 + 0xeb8);
  CListHead::AddTail((CListHead *)(param_1 + 0xfd4),(CListNode *)(param_1 + 0xf9c));
  return;
}

