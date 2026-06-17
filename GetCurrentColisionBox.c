
/* public: void __thiscall CModelInstance::GetCurrentColisionBox(class AABBox<float,3> &) */

void __thiscall CModelInstance::GetCurrentColisionBox(CModelInstance *this,AABBox<float,3> *param_1)

{
  ColisionBox *pCVar1;
  float *pfVar2;
  undefined1 local_18 [24];
  
                    /* 0x15cb30  1813
                       ?GetCurrentColisionBox@CModelInstance@@QAEXAAV?$AABBox@M$02@@@Z */
  pCVar1 = GetCurrentColisionBox(this);
  pfVar2 = FUN_360bef70(local_18,(float *)pCVar1,(float *)(pCVar1 + 0xc));
  *(float *)param_1 = *pfVar2;
  *(float *)(param_1 + 4) = pfVar2[1];
  *(float *)(param_1 + 8) = pfVar2[2];
  *(float *)(param_1 + 0xc) = pfVar2[3];
  *(float *)(param_1 + 0x10) = pfVar2[4];
  *(float *)(param_1 + 0x14) = pfVar2[5];
  return;
}

