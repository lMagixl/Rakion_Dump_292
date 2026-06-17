
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelInstance::AddSimpleShadow(float,class Plane<float,3> const &) */

void __thiscall
CModelInstance::AddSimpleShadow(CModelInstance *this,float param_1,Plane<float,3> *param_2)

{
                    /* 0x15caa0  1013  ?AddSimpleShadow@CModelInstance@@QAEXMABV?$Plane@M$02@@@Z */
  *(float *)(DAT_362bef74 + 0x23c) = *(float *)(DAT_362bef74 + 0x23c) + _DAT_36223384;
  RM_SetObjectMatrices(this);
  RM_AddSimpleShadow_View(this,param_1,param_2);
  return;
}

