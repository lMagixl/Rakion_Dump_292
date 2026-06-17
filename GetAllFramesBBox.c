
/* public: void __thiscall CModelInstance::GetAllFramesBBox(class AABBox<float,3> &) */

void __thiscall CModelInstance::GetAllFramesBBox(CModelInstance *this,AABBox<float,3> *param_1)

{
  float *pfVar1;
  undefined1 local_18 [24];
  
                    /* 0x15cae0  1698  ?GetAllFramesBBox@CModelInstance@@QAEXAAV?$AABBox@M$02@@@Z */
  pfVar1 = FUN_360bef70(local_18,(float *)(this + 0x9c),(float *)(this + 0xa8));
  *(float *)param_1 = *pfVar1;
  *(float *)(param_1 + 4) = pfVar1[1];
  *(float *)(param_1 + 8) = pfVar1[2];
  *(float *)(param_1 + 0xc) = pfVar1[3];
  *(float *)(param_1 + 0x10) = pfVar1[4];
  *(float *)(param_1 + 0x14) = pfVar1[5];
  return;
}

