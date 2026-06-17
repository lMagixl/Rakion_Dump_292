
void __cdecl
FUN_36071760(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint local_20 [8];
  
  iVar3 = 4;
  local_20[0] = 3;
  local_20[1] = 0xc;
  local_20[2] = 0x30;
  local_20[3] = 0xc0;
  local_20[4] = 0;
  local_20[5] = 2;
  local_20[6] = 4;
  local_20[7] = 6;
  pbVar4 = (byte *)(param_2 + 4);
  do {
    iVar2 = 0;
    do {
      switch((*(uint *)((int)local_20 + iVar2) & (uint)*pbVar4) >>
             ((byte)*(undefined4 *)((int)local_20 + iVar2 + 0x10) & 0x1f)) {
      case 0:
        puVar1 = param_4;
        break;
      case 1:
        puVar1 = param_5;
        break;
      case 2:
        puVar1 = param_6;
        break;
      case 3:
        puVar1 = param_7;
        break;
      default:
        goto switchD_360717d6_default;
      }
      *param_1 = *puVar1;
switchD_360717d6_default:
      iVar2 = iVar2 + 4;
      param_1 = param_1 + 1;
    } while (iVar2 < 0x10);
    param_1 = param_1 + param_3 + -4;
    pbVar4 = pbVar4 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

