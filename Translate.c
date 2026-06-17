
/* public: void __thiscall CMappingDefinition::Translate(class CMappingVectors const &,class
   Vector<float,3> const &) */

void __thiscall
CMappingDefinition::Translate
          (CMappingDefinition *this,CMappingVectors *param_1,Vector<float,3> *param_2)

{
  float *pfVar1;
  float local_40 [3];
  Plane<float,3> local_34 [16];
  float local_24;
  float local_20;
  float local_1c;
  
                    /* 0x5f6d0  3846
                       ?Translate@CMappingDefinition@@QAEXABVCMappingVectors@@ABV?$Vector@M$02@@@Z
                        */
  CMappingVectors::ToPlane(param_1,local_34);
  ToMappingVectors(this,param_1,(CMappingVectors *)&local_24);
  pfVar1 = (float *)FUN_3605fd00(local_34,local_40,(float *)param_2);
  local_24 = local_24 + *pfVar1;
  local_20 = local_20 + pfVar1[1];
  local_1c = local_1c + pfVar1[2];
  FromMappingVectors(this,param_1,(CMappingVectors *)&local_24);
  return;
}

