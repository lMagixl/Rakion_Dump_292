
void __fastcall FUN_3611d910(void *param_1)

{
  CListNode *this;
  float *pfVar1;
  int iVar2;
  
  FUN_36118840((int)param_1);
  *(undefined4 *)((int)param_1 + 0xe68) = 0;
  *(undefined4 *)((int)param_1 + 0xe58) = 0;
  if (0 < *(int *)((int)param_1 + 0xe28)) {
    do {
      iVar2 = *(int *)((int)param_1 + 0xe2c) + *(int *)((int)param_1 + 0xe58);
      *(int *)((int)param_1 + 0xe5c) = iVar2;
      *(float *)((int)param_1 + 0xe60) = (float)iVar2;
      FUN_36122d40(param_1,*(int *)((int)param_1 + 0xe58));
      pfVar1 = FUN_361234b0(param_1);
      if (pfVar1 != (float *)0x0) {
        do {
          this = *(CListNode **)((int)param_1 + 0xfd4);
          while (this + -0xf0 != (CListNode *)((int)param_1 + 0xeac)) {
            CListNode::Remove(this);
            *(undefined4 *)(this + 8) = 0;
            this = *(CListNode **)((int)param_1 + 0xfd4);
          }
          FUN_3611c4b0(param_1,(int *)pfVar1);
          FUN_36122d40(param_1,*(int *)((int)param_1 + 0xe58));
          pfVar1 = FUN_361234b0(param_1);
        } while (pfVar1 != (float *)0x0);
      }
      *(int *)((int)param_1 + 0xe68) = *(int *)((int)param_1 + 0xe68) + 1;
      FUN_36117990((int)param_1);
      FUN_36121680(param_1,*(undefined4 **)(DAT_362fcb24 + *(int *)((int)param_1 + 0xe58) * 4));
      FUN_36121710((int)param_1);
      iVar2 = *(int *)((int)param_1 + 0xe58) + 1;
      *(int *)((int)param_1 + 0xe58) = iVar2;
    } while (iVar2 < *(int *)((int)param_1 + 0xe28));
  }
  FUN_36114160((int)param_1);
  return;
}

