
void __cdecl FUN_36123d90(int *param_1,int param_2)

{
  int iVar1;
  CBrushMip *pCVar2;
  float *pfVar3;
  undefined8 uVar4;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [9];
  
  local_3c = 3e+38;
  local_30 = -3e+38;
  local_38 = 3e+38;
  local_2c = -3e+38;
  local_34 = 3e+38;
  local_28 = -3e+38;
  local_24[0] = 0.0;
  local_24[1] = 0.0;
  local_24[2] = 0.0;
  local_24[3] = 0.0;
  local_24[4] = 0.0;
  local_24[5] = 0.0;
  local_24[6] = 0.0;
  local_24[7] = 0.0;
  local_24[8] = 0.0;
  FUN_3604f120(local_24,0x3f800000);
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 == 3) || (iVar1 == 5)) {
    CModelObject::GetCurrentFrameBBox
              (*(CModelObject **)(param_2 + 0x7c),(AABBox<float,3> *)&local_3c);
  }
  else {
    if ((iVar1 != 9) && (iVar1 != 10)) {
      pCVar2 = CBrush3D::GetFirstMip(*(CBrush3D **)(param_2 + 0x7c));
      local_3c = *(float *)(pCVar2 + 0x24);
      local_38 = *(float *)(pCVar2 + 0x28);
      local_34 = *(float *)(pCVar2 + 0x2c);
      local_30 = *(float *)(pCVar2 + 0x30);
      local_2c = *(float *)(pCVar2 + 0x34);
      local_28 = *(float *)(pCVar2 + 0x38);
      local_48 = 0.0;
      local_44 = 0.0;
      local_50 = 0;
      local_40 = 0.0;
      local_54 = 0.0;
      local_4c = 0;
      pfVar3 = local_24;
      goto LAB_36123f34;
    }
    CModelInstance::GetCurrentColisionBox
              (*(CModelInstance **)(param_2 + 0x7c),(AABBox<float,3> *)&local_3c);
    iVar1 = *(int *)(param_2 + 0x7c);
    local_48 = *(float *)(iVar1 + 0x90);
    local_44 = *(float *)(iVar1 + 0x94);
    local_40 = *(float *)(iVar1 + 0x98);
    local_30 = local_30 * ABS(local_48);
    local_3c = ABS(local_48) * local_3c;
    local_2c = local_2c * ABS(local_44);
    local_38 = ABS(local_44) * local_38;
    local_28 = local_28 * ABS(local_40);
    local_34 = ABS(local_40) * local_34;
  }
  local_54 = *(float *)(param_2 + 0x3c);
  local_50 = *(undefined4 *)(param_2 + 0x40);
  local_4c = *(undefined4 *)(param_2 + 0x44);
  pfVar3 = (float *)(param_2 + 0x54);
LAB_36123f34:
  uVar4 = FUN_361238e0(param_1,&local_3c,pfVar3,&local_54);
  if ((int)uVar4 != 0) {
    if (_bSelectAlternative == 0) {
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        FUN_360cceb0(_pselenSelectOnRender,param_2);
      }
    }
    else if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
      FUN_360cc890(_pselenSelectOnRender,param_2);
      return;
    }
  }
  return;
}

