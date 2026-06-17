
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CAnimObject::GetFrame(long &,long &,float &)const  */

void __thiscall CAnimObject::GetFrame(CAnimObject *this,long *param_1,long *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  ulonglong uVar11;
  
                    /* 0x20810  1889  ?GetFrame@CAnimObject@@QBEXAAJ0AAM@Z */
  iVar6 = *(int *)(this + 0x14);
  if ((iVar6 != 0) && (0 < *(int *)(iVar6 + 0x14))) {
    iVar1 = *(int *)(this + 8);
    iVar8 = iVar1 * 0x2c;
    iVar5 = *(int *)(iVar6 + 0x18) + iVar8;
    if (0 < *(int *)(iVar5 + 0x24)) {
      if (((byte)this[0xc] & 1) != 0) {
        uVar11 = FUN_361bfd6c();
        uVar3 = FUN_360201f0(this,(uint)uVar11);
        lVar7 = *(long *)(*(int *)(iVar5 + 0x28) + uVar3 * 4);
        *param_2 = lVar7;
        *param_1 = lVar7;
        *param_3 = 0.0;
        return;
      }
      fVar2 = (CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc)) -
              *(float *)(this + 4);
      if (_DAT_3622376c <= fVar2) {
        fVar2 = fVar2 / *(float *)(iVar5 + 0x20);
        uVar11 = FUN_361bfd6c();
        uVar3 = FUN_360201f0(this,(uint)uVar11);
        *param_1 = *(long *)(*(int *)(iVar5 + 0x28) + uVar3 * 4);
        uVar11 = FUN_361bfd6c();
        uVar3 = FUN_360201f0(this,(uint)uVar11);
        *param_2 = *(long *)(*(int *)(iVar5 + 0x28) + uVar3 * 4);
        fVar10 = FUN_3601f440(fVar2);
        *param_3 = (float)((float10)fVar2 - fVar10);
        return;
      }
      iVar6 = *(int *)(iVar6 + 0x18);
      iVar9 = *(int *)(this + 0x10) * 0x2c + iVar6;
      *(int *)(this + 8) = *(int *)(this + 0x10);
      iVar4 = *(int *)(iVar9 + 0x24) + -1;
      fVar2 = fVar2 / *(float *)(iVar9 + 0x20) + (float)*(int *)(iVar9 + 0x24);
      uVar11 = FUN_361bfd6c();
      iVar5 = (int)uVar11;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (iVar4 < iVar5) {
        iVar5 = iVar4;
      }
      *param_1 = *(long *)(*(int *)(iVar9 + 0x28) + iVar5 * 4);
      uVar11 = FUN_361bfd6c();
      iVar5 = (int)uVar11;
      if (iVar5 < *(int *)(iVar9 + 0x24)) {
        iVar6 = *(int *)(iVar9 + 0x24) + -1;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (iVar6 < iVar5) {
          iVar5 = iVar6;
        }
        lVar7 = *(long *)(*(int *)(iVar9 + 0x28) + iVar5 * 4);
      }
      else {
        lVar7 = **(long **)(iVar6 + 0x28 + iVar8);
      }
      *param_2 = lVar7;
      *(int *)(this + 8) = iVar1;
      fVar10 = FUN_3601f440(fVar2);
      *param_3 = (float)((float10)fVar2 - fVar10);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0.0;
  return;
}

