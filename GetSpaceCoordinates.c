
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::GetSpaceCoordinates(class CMappingVectors const
   &,class Vector<long,2> const &,class Vector<float,3> &)const  */

void __thiscall
CMappingDefinition::GetSpaceCoordinates
          (CMappingDefinition *this,CMappingVectors *param_1,Vector<long,2> *param_2,
          Vector<float,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x5f2f0  2131
                       ?GetSpaceCoordinates@CMappingDefinition@@QBEXABVCMappingVectors@@ABV?$Vector@J$01@@AAV?$Vector@M$02@@@Z
                        */
  fVar3 = _DAT_36223384 /
          (*(float *)this * *(float *)(this + 0xc) - *(float *)(this + 4) * *(float *)(this + 8));
  fVar4 = (float)*(int *)param_2 * _DAT_362265a4 + *(float *)(this + 0x10);
  fVar5 = (float)*(int *)(param_2 + 4) * _DAT_362265a4 + *(float *)(this + 0x14);
  fVar8 = fVar3 * *(float *)(this + 0xc) * fVar4 + -(fVar3 * *(float *)(this + 4)) * fVar5;
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0x20);
  fVar7 = fVar3 * *(float *)this * fVar5 + -(fVar3 * *(float *)(this + 8)) * fVar4;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  *(float *)param_3 =
       *(float *)param_1 + *(float *)(param_1 + 0xc) * fVar8 + *(float *)(param_1 + 0x18) * fVar7;
  *(float *)(param_3 + 4) = fVar5 + fVar3 * fVar8 + fVar1 * fVar7;
  *(float *)(param_3 + 8) = fVar6 + fVar4 * fVar8 + fVar2 * fVar7;
  return;
}

