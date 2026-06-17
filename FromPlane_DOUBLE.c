
/* public: void __thiscall CMappingVectors::FromPlane_DOUBLE(class Plane<double,3> const &) */

void __thiscall CMappingVectors::FromPlane_DOUBLE(CMappingVectors *this,Plane<double,3> *param_1)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x5e550  1686  ?FromPlane_DOUBLE@CMappingVectors@@QAEXABV?$Plane@N$02@@@Z */
  local_10 = (float)*(double *)param_1;
  local_c = (float)*(double *)(param_1 + 8);
  local_8 = (float)*(double *)(param_1 + 0x10);
  local_4 = (float)*(double *)(param_1 + 0x18);
  FromPlane(this,(Plane<float,3> *)&local_10);
  return;
}

