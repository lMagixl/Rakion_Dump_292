
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelInstance::StretchSingleModel(class Vector<float,3> &) */

void __thiscall CModelInstance::StretchSingleModel(CModelInstance *this,Vector<float,3> *param_1)

{
  int iVar1;
  CModelInstance *this_00;
  int iVar2;
  Vector<float,3> *pVVar3;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x15cd10  3696  ?StretchSingleModel@CModelInstance@@QAEXAAV?$Vector@M$02@@@Z
                        */
  local_c = _DAT_36223384;
  *(undefined4 *)(this + 0x90) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 8);
  local_c = local_c / *(float *)param_1;
  local_8 = _DAT_36223384 / *(float *)(param_1 + 4);
  local_4 = _DAT_36223384 / *(float *)(param_1 + 8);
  iVar1 = FUN_36036010((int)(this + 0x4c));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      pVVar3 = (Vector<float,3> *)&local_c;
      this_00 = (CModelInstance *)FUN_36036020(this + 0x4c,iVar2);
      StretchModel(this_00,pVVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

