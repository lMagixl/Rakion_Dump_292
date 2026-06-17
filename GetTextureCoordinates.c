
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::GetTextureCoordinates(class CMappingVectors const
   &,class Vector<float,3> const &,class Vector<long,2> &)const  */

void __thiscall
CMappingDefinition::GetTextureCoordinates
          (CMappingDefinition *this,CMappingVectors *param_1,Vector<float,3> *param_2,
          Vector<long,2> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* 0x5f200  2156
                       ?GetTextureCoordinates@CMappingDefinition@@QBEXABVCMappingVectors@@ABV?$Vector@M$02@@AAV?$Vector@J$01@@@Z
                        */
  fVar3 = (*(float *)param_2 - *(float *)param_1) * *(float *)(param_1 + 0xc) +
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x14) +
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_1 + 0x10);
  fVar4 = (*(float *)param_2 - *(float *)param_1) * *(float *)(param_1 + 0x18) +
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x20) +
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_1 + 0x1c);
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 8);
  *(int *)param_3 =
       (int)ROUND((fVar3 * *(float *)this + fVar4 * *(float *)(this + 4) + *(float *)(this + 0x10))
                  * _DAT_362280ec);
  *(int *)(param_3 + 4) =
       (int)ROUND((fVar3 * fVar2 + fVar4 * fVar1 + *(float *)(this + 0x14)) * _DAT_362280ec);
  return;
}

