
void __thiscall FUN_36209a30(void *this,float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      iVar7 = 0;
      if (0 < *(int *)((int)this + 4)) {
        do {
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar6 = 0;
          }
          iVar4 = iVar5;
          if (iVar5 < 0) {
            iVar4 = 0;
          }
          iVar2 = **(int **)((int)this + 0xc);
          if (iVar2 <= iVar6) {
            iVar6 = iVar2 + -1;
          }
          iVar3 = (*(int **)((int)this + 0xc))[1];
          if (iVar3 <= iVar4) {
            iVar4 = iVar3 + -1;
          }
          iVar6 = iVar2 * iVar4 + iVar6;
          fVar1 = *(float *)(*(int *)this + iVar6 * 4);
          if (fVar1 < param_1) {
            fVar1 = param_1;
          }
          if (param_2 < fVar1) {
            fVar1 = param_2;
          }
          *(float *)(*(int *)this + iVar6 * 4) = fVar1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((int)this + 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 8));
  }
  return;
}

