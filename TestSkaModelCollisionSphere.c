
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::TestSkaModelCollisionSphere(class CEntity *,class
   CModelInstance &) */

void __thiscall
CCastRay::TestSkaModelCollisionSphere(CCastRay *this,CEntity *param_1,CModelInstance *param_2)

{
  CModelInstance *pCVar1;
  CModelInstance *this_00;
  int iVar2;
  float *pfVar3;
  int iVar4;
  void *this_01;
  int local_10;
  float local_c [3];
  
                    /* 0xdd440  3813
                       ?TestSkaModelCollisionSphere@CCastRay@@QAEXPAVCEntity@@AAVCModelInstance@@@Z
                        */
  this_00 = param_2;
  pCVar1 = param_2 + 0x24;
  iVar2 = FUN_360de540((undefined4 *)pCVar1);
  if (iVar2 == 0) {
    TestSkaModelCollisionBox(this,param_1,this_00);
    return;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    this_01 = (void *)(*(int *)(param_1 + 0x84) + 0x18);
    pfVar3 = (float *)FUN_3605ccc0(this_01,local_c);
    param_2 = (CModelInstance *)
              (SQRT(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3) *
              _DAT_36227cf0);
    FUN_3605cd80(this_01,local_c);
    iVar2 = FUN_360dbfc0((float *)(this + 0x2c),local_c,(float)param_2 + *(float *)(this + 0x80),
                         (float *)&param_2);
    if (iVar2 != 0) {
      local_10 = FUN_360de540((undefined4 *)pCVar1);
      if (0 < local_10) {
        iVar2 = 0;
        do {
          iVar4 = *(int *)(this_00 + 0x28);
          CModelInstance::GetBonePositionAbs(this_00,(long)local_c);
          iVar4 = FUN_360dbfc0((float *)(this + 0x2c),local_c,
                               *(float *)(iVar4 + iVar2 + 8) + *(float *)(this + 0x80),
                               (float *)&param_2);
          if (((iVar4 != 0) && ((float)param_2 < *(float *)(this + 0x94))) &&
             (-*(float *)(this + 0x80) < (float)param_2)) {
            *(CModelInstance **)(this + 0x94) = param_2;
            *(CEntity **)(this + 0x84) = param_1;
            *(undefined4 *)(this + 0xa8) = 0;
            *(undefined4 *)(this + 0xa4) = 0;
          }
          iVar2 = iVar2 + 0xc;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

