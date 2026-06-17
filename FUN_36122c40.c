
void __thiscall FUN_36122c40(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  iVar4 = param_1[7] - *(int *)((int)this + 0xe2c);
  param_1[4] = *(int *)(DAT_362fcb24 + -4 + iVar4 * 4);
  *(int **)(DAT_362fcb24 + (iVar4 + -1) * 4) = param_1;
  iVar4 = param_1[6] - *(int *)((int)this + 0xe2c);
  piVar2 = *(int **)(DAT_362fcb14 + iVar4 * 0xc);
  piVar1 = (int *)(DAT_362fcb1c + iVar4 * 4);
  *piVar1 = *piVar1 + 1;
  iVar4 = *piVar2;
  while ((iVar4 != 0 && (piVar2[-1] <= *param_1))) {
    piVar2 = (int *)*piVar2;
    iVar4 = *piVar2;
  }
  iVar4 = FUN_3611f750(0x362fca8c);
  if (iVar4 - DAT_362fcaa0 < 1) {
    FUN_36121dd0(&DAT_362fca8c,DAT_362fcaa4);
  }
  iVar4 = DAT_362fcaa0;
  DAT_362fcaa0 = DAT_362fcaa0 + 1;
  piVar5 = (int *)FUN_3611fc20(&DAT_362fca8c,iVar4);
  *piVar5 = *param_1;
  piVar1 = piVar5 + 1;
  *piVar1 = 0;
  piVar5[2] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = param_1;
  piVar5[3] = (int)param_1;
  iVar4 = CListNode::IsLinked((CListNode *)&local_c);
  if (iVar4 != 0) {
    CListNode::Remove((CListNode *)&local_c);
  }
  puVar3 = (undefined4 *)piVar2[1];
  *piVar1 = (int)piVar2;
  piVar5[2] = (int)puVar3;
  *puVar3 = piVar1;
  piVar2[1] = (int)piVar1;
  param_1[3] = 1;
  return;
}

