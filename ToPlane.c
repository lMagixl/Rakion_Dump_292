
/* public: void __thiscall CMappingVectors::ToPlane(class Plane<float,3> &)const  */

void __thiscall CMappingVectors::ToPlane(CMappingVectors *this,Plane<float,3> *param_1)

{
  float *pfVar1;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
                    /* 0x5e5a0  3834  ?ToPlane@CMappingVectors@@QBEXAAV?$Plane@M$02@@@Z */
  local_1c = *(float *)(this + 0x1c) * *(float *)(this + 0x14) -
             *(float *)(this + 0x20) * *(float *)(this + 0x10);
  local_18 = *(float *)(this + 0xc) * *(float *)(this + 0x20) -
             *(float *)(this + 0x18) * *(float *)(this + 0x14);
  local_14 = *(float *)(this + 0x18) * *(float *)(this + 0x10) -
             *(float *)(this + 0x1c) * *(float *)(this + 0xc);
  pfVar1 = FUN_3605f8b0(local_10,&local_1c,(float *)this);
  *(float *)param_1 = *pfVar1;
  *(float *)(param_1 + 4) = pfVar1[1];
  *(float *)(param_1 + 8) = pfVar1[2];
  *(float *)(param_1 + 0xc) = pfVar1[3];
  return;
}

