
/* public: class CLastPositions * __thiscall CEntity::GetLastPositions(long) */

CLastPositions * __thiscall CEntity::GetLastPositions(CEntity *this,long param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  Vector<float,3> *pVVar5;
  
                    /* 0x1281c0  1935  ?GetLastPositions@CEntity@@QAEPAVCLastPositions@@J@Z */
  fVar2 = *(float *)(_pTimer + 0xc);
  if (*(int *)(this + 0xa4) == 0) {
    puVar3 = (undefined4 *)FUN_361bf99c(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    *(undefined4 **)(this + 0xa4) = puVar3;
    FUN_3604f220(puVar3,param_1);
    *(undefined4 *)(*(int *)(this + 0xa4) + 0xc) = 0;
    *(undefined4 *)(*(int *)(this + 0xa4) + 8) = 0;
    *(float *)(*(int *)(this + 0xa4) + 0x10) = fVar2;
    if (0 < param_1) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)(*(int *)(*(int *)(this + 0xa4) + 4) + iVar4);
        *puVar3 = *(undefined4 *)(this + 0x3c);
        puVar3[1] = *(undefined4 *)(this + 0x40);
        iVar4 = iVar4 + 0xc;
        param_1 = param_1 + -1;
        puVar3[2] = *(undefined4 *)(this + 0x44);
      } while (param_1 != 0);
    }
  }
  fVar1 = *(float *)(*(int *)(this + 0xa4) + 0x10);
  while (fVar1 < fVar2) {
    pVVar5 = CLastPositions::GetPosition(*(CLastPositions **)(this + 0xa4),0);
    CLastPositions::AddPosition(*(CLastPositions **)(this + 0xa4),pVVar5);
    fVar1 = *(float *)(*(int *)(this + 0xa4) + 0x10);
  }
  return *(CLastPositions **)(this + 0xa4);
}

