
/* public: virtual void __thiscall CMovableEntity::SetAP(float) */

void __thiscall CMovableEntity::SetAP(CMovableEntity *this,float param_1)

{
  xEncryptMemory *pxVar1;
  float10 fVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float local_10 [4];
  
                    /* 0x1ad850  3388  ?SetAP@CMovableEntity@@UAEXM@Z */
  uVar3 = *(uint *)(this + 0x278);
  uVar5 = 1;
  pfVar4 = &param_1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar3,(int)pfVar4,uVar5);
  uVar3 = *(uint *)(this + 0x278);
  uVar5 = 1;
  pfVar4 = local_10;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar3,pfVar4,uVar5);
  fVar2 = (float10)(**(code **)(*(int *)this + 0x168))();
  if ((float10)local_10[0] < fVar2 != ((float10)local_10[0] == fVar2)) {
    fVar2 = (float10)local_10[0];
  }
  uVar3 = *(uint *)(this + 0x278);
  param_1 = (float)fVar2;
  uVar5 = 1;
  pfVar4 = &param_1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar3,(int)pfVar4,uVar5);
  return;
}

