
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::SetProjection(class CAnyProjection3D &)const  */

void __thiscall CDrawPort::SetProjection(CDrawPort *this,CAnyProjection3D *param_1)

{
  int iVar1;
  CAnyProjection3D *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  CAnyProjection3D *pCVar10;
  float fStack_38;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  double dStack_8;
  
                    /* 0x66af0  3567  ?SetProjection@CDrawPort@@QBEXAAVCAnyProjection3D@@@Z */
  pCVar10 = param_1;
  if (DAT_362a40b8 < 0) {
    DAT_362a40b8 = 0;
  }
  else if (3 < DAT_362a40b8) {
    DAT_362a40b8 = 3;
  }
  if (DAT_362c53e4 < 0) {
    DAT_362c53e4 = 0;
  }
  else if (3 < DAT_362c53e4) {
    DAT_362c53e4 = 3;
  }
  if (((DAT_362a40b8 == 3) && (*(int *)(_pGfx + 0xa38) == 0)) ||
     ((DAT_362c53e4 == 3 && (*(int *)(_pGfx + 0xa38) == 1)))) {
    (*DAT_362c46b4)(0);
  }
  if ((*(int *)(*(int *)(param_1 + 0x658) + 0x7c) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x658) + 0x80) == 0)) {
    (*DAT_362c4644)();
  }
  else {
    (*DAT_362c4618)();
    iVar1 = *(int *)(param_1 + 0x658);
    dStack_20 = (double)*(float *)(iVar1 + 0x94);
    dStack_18 = (double)*(float *)(iVar1 + 0x98);
    dStack_10 = (double)*(float *)(iVar1 + 0x9c);
    dStack_8 = (double)-*(float *)(iVar1 + 0xa0);
    (*DAT_362c465c)(&dStack_20);
  }
  pCVar2 = *(CAnyProjection3D **)(param_1 + 0x658);
  if (pCVar2 == param_1 + 0x184) {
    fVar3 = _DAT_36223384 / (*(float *)(pCVar2 + 0x184) * *(float *)(pCVar2 + 0xa4));
    param_1 = *(CAnyProjection3D **)(pCVar2 + 0x50);
    if ((float)param_1 < _DAT_3622376c) {
      param_1 = (CAnyProjection3D *)0x47c35000;
    }
    (*DAT_362c4660)((*(float *)(pCVar2 + 0x54) - *(float *)(pCVar2 + 0x128)) * fVar3,
                    (*(float *)(pCVar2 + 0x5c) - *(float *)(pCVar2 + 0x128)) * fVar3,
                    -((*(float *)(pCVar2 + 0x58) - *(float *)(pCVar2 + 300)) * fVar3),
                    -((*(float *)(pCVar2 + 0x60) - *(float *)(pCVar2 + 300)) * fVar3),
                    *(undefined4 *)(pCVar2 + 0x4c),param_1,0);
  }
  else {
    fVar3 = *(float *)(pCVar2 + 0x4c);
    fVar4 = (*(float *)(pCVar2 + 0x14c) / *(float *)(pCVar2 + 0x144)) * fVar3;
    fVar5 = (*(float *)(pCVar2 + 0x15c) / *(float *)(pCVar2 + 0x154)) * fVar3;
    fVar7 = (*(float *)(pCVar2 + 0x16c) / *(float *)(pCVar2 + 0x168)) * fVar3;
    fVar8 = (*(float *)(pCVar2 + 0x17c) / *(float *)(pCVar2 + 0x178)) * fVar3;
    fVar6 = (fVar5 - fVar4) / (float)(*(int *)(this + 0x10) - *(int *)(this + 8));
    fVar9 = (fVar8 - fVar7) / (float)(*(int *)(this + 0x14) - *(int *)(this + 0xc));
    fStack_38 = *(float *)(pCVar2 + 0x50);
    if (fStack_38 < _DAT_3622376c) {
      fStack_38 = 100000.0;
    }
    (*DAT_362c4664)((float)(*(int *)(this + 0x18) - *(int *)(this + 8)) * fVar6 + fVar4,
                    (float)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) * fVar6 + fVar5,
                    (float)(*(int *)(this + 0x1c) - *(int *)(this + 0xc)) * fVar9 + fVar7,
                    (float)(*(int *)(this + 0x24) - *(int *)(this + 0x14)) * fVar9 + fVar8,fVar3,
                    fStack_38);
  }
  (*DAT_362c4650)(*(undefined4 *)(*(int *)(pCVar10 + 0x658) + 0x13c),
                  *(undefined4 *)(*(int *)(pCVar10 + 0x658) + 0x140));
  (*DAT_362c4654)(0x3f);
  (*DAT_362c4674)(0);
  (*DAT_362c46c0)();
  return;
}

