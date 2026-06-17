
void __cdecl FUN_361cc398(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *pcVar5;
  char local_204 [255];
  undefined1 local_105;
  char local_104 [255];
  undefined1 local_5;
  
  _vsnprintf(local_204,0x100,param_2,&stack0x0000000c);
  local_105 = 0;
  if (*(int *)(param_1 + 0x3d8) != 0) {
    iVar1 = 0xd;
    bVar4 = true;
    pcVar5 = local_204;
    pcVar3 = s_syntax_error_36249504;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar5 == *pcVar3;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = *(int *)(param_1 + 0x3dc);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x1d0);
        pcVar5 = s__s__d_____Assembly_Error__shader_362494d0;
      }
      else {
        if (*(int *)(param_1 + 0xa0) != 0) {
          iVar2 = 4;
          bVar4 = true;
          pcVar5 = (char *)(param_1 + 200);
          pcVar3 = &DAT_362494cc;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar4 = *pcVar5 == *pcVar3;
            pcVar5 = pcVar5 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            iVar1 = *(int *)(param_1 + 0x1d0);
            pcVar5 = s__s__d_____Assembly_Error__consta_3624948c;
            goto LAB_361cc438;
          }
        }
        pcVar5 = s__s__d_____Assembly_Error__statem_3624945c;
      }
LAB_361cc438:
      _snprintf(local_104,0x100,pcVar5,param_1 + 0x1d4,iVar1);
      goto LAB_361cc4a3;
    }
  }
  if (*(int *)(param_1 + 0x3e0) == 0) {
    iVar1 = *(int *)(param_1 + 0x1d0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3e4);
  }
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  _snprintf(local_104,0x100,s___s__d_____Assembly_Error___s_3624943b + 1,param_1 + 0x1d4,iVar1,
            local_204);
LAB_361cc4a3:
  local_5 = 0;
  FUN_361dbc8b((void *)(param_1 + 0x84),local_104);
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  *(undefined4 *)(param_1 + 0x98) = 1;
  return;
}

