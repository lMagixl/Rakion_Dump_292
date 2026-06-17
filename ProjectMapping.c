
/* public: void __thiscall CMappingDefinition::ProjectMapping(class Plane<float,3> const &,class
   CMappingDefinition const &,class Plane<float,3> const &) */

void __thiscall
CMappingDefinition::ProjectMapping
          (CMappingDefinition *this,Plane<float,3> *param_1,CMappingDefinition *param_2,
          Plane<float,3> *param_3)

{
  float *pfVar1;
  float local_6c [3];
  float local_60 [3];
  float local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  CMappingVectors local_24 [12];
  float local_18 [3];
  float local_c [3];
  
                    /* 0x5f5d0  2862
                       ?ProjectMapping@CMappingDefinition@@QAEXABV?$Plane@M$02@@ABV1@0@Z */
  CMappingVectors::FromPlane((CMappingVectors *)&local_48,param_1);
  ToMappingVectors(param_2,(CMappingVectors *)&local_48,local_24);
  pfVar1 = (float *)FUN_3605fae0(param_3,local_6c,(float *)param_1,(float *)local_24);
  local_48 = *pfVar1;
  local_44 = pfVar1[1];
  local_40 = pfVar1[2];
  pfVar1 = (float *)FUN_3605f9c0(param_3,local_60,(float *)param_1,local_18);
  local_3c = *pfVar1;
  local_38 = pfVar1[1];
  local_34 = pfVar1[2];
  pfVar1 = (float *)FUN_3605f9c0(param_3,local_54,(float *)param_1,local_c);
  local_30 = *pfVar1;
  local_2c = pfVar1[1];
  local_28 = pfVar1[2];
  FUN_3605fbc0(param_1,local_54,&local_48);
  FUN_3605fd00(param_1,local_54,&local_3c);
  FUN_3605fd00(param_1,local_54,&local_30);
  CMappingVectors::FromPlane(local_24,param_3);
  FromMappingVectors(this,local_24,(CMappingVectors *)&local_48);
  return;
}

