
void __fastcall FUN_36209c50(int *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d15b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_361bf99c(0x1c);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_36208d70(this,*param_1,param_1[1]);
  }
  iVar1 = param_1[1];
  iVar4 = 0;
  iVar2 = *param_1;
  if (0 < iVar1 * iVar2) {
    do {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)piVar3[3] + -4 + iVar4 * 4) =
           *(undefined4 *)(*(int *)param_1[3] + -4 + iVar4 * 4);
      *(undefined4 *)(*(int *)piVar3[4] + -4 + iVar4 * 4) =
           *(undefined4 *)(*(int *)param_1[4] + -4 + iVar4 * 4);
      *(undefined4 *)(*(int *)piVar3[5] + -4 + iVar4 * 4) =
           *(undefined4 *)(*(int *)param_1[5] + -4 + iVar4 * 4);
      *(undefined4 *)(*(int *)piVar3[6] + -4 + iVar4 * 4) =
           *(undefined4 *)(*(int *)param_1[6] + -4 + iVar4 * 4);
    } while (iVar4 < iVar1 * iVar2);
  }
  ExceptionList = local_c;
  return;
}

