
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198550(char *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  char *pcVar9;
  char *pcVar10;
  char local_30 [12];
  char local_24 [12];
  char local_18 [20];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar4 = *(undefined4 *)(param_1 + 1);
  cVar2 = *param_1;
  bVar3 = param_1[9];
  uVar5 = *(undefined4 *)(param_1 + 5);
  if ((cVar2 == '\0') && (bVar3 != 0)) {
    uVar8 = (ushort)bVar3;
    pcVar9 = param_1 + 10;
    pcVar10 = local_24;
    for (uVar6 = (uint)(bVar3 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar1 = uVar8 + 10;
    uVar6 = (uint)uVar8 * 2;
    pcVar9 = param_1 + iVar1;
    pcVar10 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar9 = param_1 + iVar1 + uVar6;
    pcVar10 = local_30;
    for (uVar7 = (uint)(bVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = bVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  (**(code **)(*DAT_3637fb00 + 500))(cVar2,uVar4,uVar5,bVar3,local_24,local_18,local_30);
  return;
}

