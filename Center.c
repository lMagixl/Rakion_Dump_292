
/* public: void __thiscall CMappingDefinition::Center(class CMappingVectors const &,class
   Vector<float,3> const &) */

void __thiscall
CMappingDefinition::Center
          (CMappingDefinition *this,CMappingVectors *param_1,Vector<float,3> *param_2)

{
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Plane<float,3> local_34 [16];
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* 0x5f810  1149
                       ?Center@CMappingDefinition@@QAEXABVCMappingVectors@@ABV?$Vector@M$02@@@Z */
  CMappingVectors::ToPlane(param_1,local_34);
  ToMappingVectors(this,param_1,(CMappingVectors *)&local_24);
  FUN_3605fbc0(local_34,&local_40,(float *)param_2);
  local_24 = local_40;
  local_20 = local_3c;
  local_1c = local_38;
  FromMappingVectors(this,param_1,(CMappingVectors *)&local_24);
  return;
}

