
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198670(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint local_458;
  byte local_454;
  undefined2 local_44c;
  undefined4 local_448 [120];
  char local_268 [120];
  char local_1f0 [240];
  char local_100 [244];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    local_44c = *(undefined2 *)(param_1 + 1);
    local_454 = param_1[3];
    iVar4 = 4;
    if (local_454 != 0) {
      uVar3 = (uint)local_454;
      pcVar6 = local_268;
      pcVar5 = param_1;
      for (uVar2 = (uint)(local_454 >> 2); pcVar5 = pcVar5 + 4, uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_458 = (uint)local_454;
      pcVar5 = param_1 + local_454 + 4;
      pcVar6 = local_100;
      for (uVar2 = uVar3 * 2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar2 = uVar3 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      iVar4 = local_458 * 3 + 4;
      pcVar5 = param_1 + iVar4;
      puVar7 = local_448;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar7 = puVar7 + 1;
      }
      iVar4 = iVar4 + local_458 * 4;
    }
    local_458._0_1_ = param_1[iVar4];
    if ((byte)local_458 != 0) {
      pcVar5 = param_1 + iVar4 + 1;
      pcVar6 = local_1f0;
      for (uVar2 = ((uint)(byte)local_458 << 1) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar2 = (uint)(byte)local_458 << 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x1fc))
            (cVar1,local_44c,local_454,local_268,local_100,local_448,(byte)local_458,local_1f0);
  return;
}

