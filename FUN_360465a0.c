
void __fastcall FUN_360465a0(int *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_362a2770;
  this = param_1 + 1;
  *param_1 = DAT_362a2778;
  FUN_36047ef0(this,iVar1);
  iVar3 = 0;
  iVar1 = FUN_36047b80(this);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_36045ee0((void *)(param_1[2] + iVar1),*param_1);
      CListHead::AddTail((CListHead *)(param_1 + 3),(CListNode *)(param_1[2] + 0x28 + iVar1));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x30;
      iVar2 = FUN_36047b80(this);
    } while (iVar3 < iVar2);
  }
  return;
}

