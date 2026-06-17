
undefined8 __cdecl FUN_361238e0(int *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  local_c = fVar1;
  local_8 = fVar2;
  local_4 = fVar3;
  uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
  if ((int)uVar7 != 0) {
    local_c = fVar4;
    local_8 = fVar2;
    local_4 = fVar3;
    uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
    if ((int)uVar7 != 0) {
      local_c = fVar1;
      local_8 = fVar5;
      local_4 = fVar3;
      uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
      if ((int)uVar7 != 0) {
        local_c = fVar4;
        local_8 = fVar5;
        local_4 = fVar3;
        uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
        if ((int)uVar7 != 0) {
          local_c = fVar1;
          local_8 = fVar2;
          local_4 = fVar6;
          uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
          if ((int)uVar7 != 0) {
            local_c = fVar4;
            local_8 = fVar2;
            local_4 = fVar6;
            uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
            if ((int)uVar7 != 0) {
              local_c = fVar1;
              local_8 = fVar5;
              local_4 = fVar6;
              uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
              if ((int)uVar7 != 0) {
                local_c = fVar4;
                local_8 = fVar5;
                local_4 = fVar6;
                uVar7 = FUN_361237b0(param_1,&local_c,param_3,param_4);
                if ((int)uVar7 != 0) {
                  return CONCAT44((int)(uVar7 >> 0x20),1);
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar7 & 0xffffffff00000000;
}

