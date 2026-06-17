
void __cdecl FUN_361b4b50(undefined4 *param_1,int *param_2,CShell *param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_361b4b00(param_2,param_3);
  *param_1 = 5;
  iVar1 = *param_2;
  if (iVar1 == 6) {
    switch(param_4) {
    case 0x21:
      if ((float)param_2[1] != *(float *)(param_3 + 4)) {
        param_1[2] = 1;
        return;
      }
      break;
    default:
      goto switchD_361b4b91_caseD_22;
    case 0x3c:
      if ((float)param_2[1] < *(float *)(param_3 + 4)) {
        param_1[2] = 1;
        return;
      }
      break;
    case 0x3d:
      if ((float)param_2[1] == *(float *)(param_3 + 4)) {
        param_1[2] = 1;
        return;
      }
      break;
    case 0x3e:
      if (*(float *)(param_3 + 4) < (float)param_2[1]) {
        param_1[2] = 1;
        return;
      }
      break;
    case 0x7b:
      if ((float)param_2[1] < *(float *)(param_3 + 4) !=
          ((float)param_2[1] == *(float *)(param_3 + 4))) {
LAB_361b4c11:
        param_1[2] = 1;
        return;
      }
      break;
    case 0x7d:
      if (*(float *)(param_3 + 4) <= (float)param_2[1]) goto LAB_361b4c11;
    }
    param_1[2] = 0;
    return;
  }
  if (iVar1 == 5) {
    switch(param_4) {
    case 0x21:
      param_1[2] = (uint)(param_2[2] != *(int *)(param_3 + 8));
      return;
    case 0x3c:
      param_1[2] = (uint)(param_2[2] < *(int *)(param_3 + 8));
      return;
    case 0x3d:
      param_1[2] = (uint)(param_2[2] == *(int *)(param_3 + 8));
      return;
    case 0x3e:
      param_1[2] = (uint)(*(int *)(param_3 + 8) < param_2[2]);
      return;
    case 0x7b:
      param_1[2] = (uint)(param_2[2] <= *(int *)(param_3 + 8));
      return;
    case 0x7d:
      param_1[2] = (uint)(*(int *)(param_3 + 8) <= param_2[2]);
      return;
    }
  }
  else if (iVar1 == 7) {
    switch(param_4) {
    case 0x21:
      iVar1 = _stricmp((char *)param_2[3],*(char **)(param_3 + 0xc));
      param_1[2] = (uint)(iVar1 != 0);
      return;
    case 0x3c:
      iVar1 = _stricmp((char *)param_2[3],*(char **)(param_3 + 0xc));
      param_1[2] = (uint)(iVar1 < 0);
      return;
    case 0x3d:
      iVar1 = _stricmp((char *)param_2[3],*(char **)(param_3 + 0xc));
      param_1[2] = (uint)(iVar1 == 0);
      return;
    case 0x3e:
      iVar1 = _stricmp((char *)param_2[3],*(char **)(param_3 + 0xc));
      param_1[2] = (uint)(0 < iVar1);
      return;
    case 0x7b:
      iVar1 = _stricmp((char *)param_2[3],*(char **)(param_3 + 0xc));
      param_1[2] = (uint)(iVar1 < 1);
      return;
    case 0x7d:
      iVar1 = _stricmp((char *)param_2[3],*(char **)(param_3 + 0xc));
      param_1[2] = (uint)(-1 < iVar1);
      return;
    }
  }
switchD_361b4b91_caseD_22:
  *param_1 = 5;
  param_1[2] = 0;
  return;
}

