
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::Rotate(class CMappingVectors const &,class
   Vector<float,3> const &,float) */

void __thiscall
CMappingDefinition::Rotate
          (CMappingDefinition *this,CMappingVectors *param_1,Vector<float,3> *param_2,float param_3)

{
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  Vector<float,3> local_24 [12];
  float local_18;
  float local_14;
  
                    /* 0x5f740  3179
                       ?Rotate@CMappingDefinition@@QAEXABVCMappingVectors@@ABV?$Vector@M$02@@M@Z */
  CMappingVectors::ToPlane(param_1,(Plane<float,3> *)&local_34);
  FUN_3605fbc0(&local_34,(float *)local_24,(float *)param_2);
  GetTextureCoordinates(this,param_1,local_24,(Vector<long,2> *)&local_34);
  ToUI(this,(CMappingDefinitionUI *)&local_18);
  local_18 = local_18 + param_3;
  local_14 = local_14 + param_3;
  FromUI(this,(CMappingDefinitionUI *)&local_18);
  GetTextureCoordinates(this,param_1,local_24,(Vector<long,2> *)&local_3c);
  *(float *)(this + 0x10) = (float)(local_3c - local_34) * _DAT_362265a4 + *(float *)(this + 0x10);
  *(float *)(this + 0x14) = (float)(local_38 - local_30) * _DAT_362265a4 + *(float *)(this + 0x14);
  return;
}

