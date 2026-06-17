
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::TestSkaModelCollisionBox(class CEntity *,class CModelInstance
   &) */

void __thiscall
CCastRay::TestSkaModelCollisionBox(CCastRay *this,CEntity *param_1,CModelInstance *param_2)

{
  int *piVar1;
  CEntity *pCVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xdce60  3812
                       ?TestSkaModelCollisionBox@CCastRay@@QAEXPAVCEntity@@AAVCModelInstance@@@Z */
  pCVar2 = param_1;
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    pfVar3 = (float *)FUN_3605ccc0(piVar1 + 6,&local_c);
    param_1 = (CEntity *)
              (SQRT(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3) *
              _DAT_36227cf0);
    FUN_3605cd80(piVar1 + 6,&local_c);
    iVar4 = FUN_360dbfc0((float *)(this + 0x2c),&local_c,(float)param_1 + *(float *)(this + 0x80),
                         (float *)&param_1);
    if (iVar4 != 0) {
      iVar4 = 0;
      local_2c = 0;
      if (0 < *piVar1) {
        do {
          pfVar3 = (float *)(piVar1[1] + iVar4);
          local_c = *(float *)(pCVar2 + 0x5c) * pfVar3[2] +
                    *(float *)(pCVar2 + 0x54) * *pfVar3 +
                    *(float *)(piVar1[1] + 4 + iVar4) * *(float *)(pCVar2 + 0x58) +
                    *(float *)(pCVar2 + 0x3c);
          local_8 = pfVar3[1] * *(float *)(pCVar2 + 100) +
                    *(float *)(pCVar2 + 0x68) * pfVar3[2] + *(float *)(pCVar2 + 0x60) * *pfVar3 +
                    *(float *)(pCVar2 + 0x40);
          local_4 = pfVar3[1] * *(float *)(pCVar2 + 0x70) +
                    *pfVar3 * *(float *)(pCVar2 + 0x6c) + *(float *)(pCVar2 + 0x74) * pfVar3[2] +
                    *(float *)(pCVar2 + 0x44);
          iVar5 = FUN_360dbfc0((float *)(this + 0x2c),&local_c,pfVar3[3] + *(float *)(this + 0x80),
                               (float *)&param_1);
          if (((iVar5 != 0) && ((float)param_1 < *(float *)(this + 0x94))) &&
             (-*(float *)(this + 0x80) < (float)param_1)) {
            *(CEntity **)(this + 0x94) = param_1;
            *(CEntity **)(this + 0x84) = pCVar2;
            *(undefined4 *)(this + 0xa8) = 0;
            *(undefined4 *)(this + 0xa4) = 0;
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + 0x40;
        } while (local_2c < *piVar1);
      }
    }
  }
  return;
}

