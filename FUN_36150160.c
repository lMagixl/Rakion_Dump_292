
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36150160(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  FILE *pFVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  char local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)(param_1 + 1);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_404 + -(int)param_1)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (3 < uVar4) {
    pbVar11 = &DAT_362a6a58;
    pbVar8 = (byte *)(param_1 + (uVar4 - 3));
    do {
      bVar2 = *pbVar8;
      bVar14 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_361501d4:
        iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_361501d9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar8[1];
      bVar14 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_361501d4;
      pbVar8 = pbVar8 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_361501d9:
    if (iVar9 == 0) {
      local_404[uVar4 - 3] = '\0';
      pcVar3 = param_1;
      pcVar10 = local_404;
      goto LAB_36150223;
    }
  }
  pcVar3 = local_404;
  pcVar10 = &DAT_362a6a5c;
  do {
    pcVar5 = pcVar10;
    pcVar10 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  puVar13 = (undefined4 *)&stack0xfffffbfb;
  do {
    pcVar10 = (char *)((int)puVar13 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  } while (*pcVar10 != '\0');
  puVar12 = (undefined4 *)&DAT_362a6a5c;
  for (uVar4 = (uint)(pcVar5 + -0x362a6a5b) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar4 = (uint)(pcVar5 + -0x362a6a5b) & 3; pcVar10 = param_1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
LAB_36150223:
  piVar6 = (int *)FUN_3614c550(pcVar3,&DAT_362a6a60);
  if (piVar6 == (int *)0x0) {
    fprintf((FILE *)(_iob_exref + 0x40),s__s__can_t_gzopen__s_362a6a64,DAT_363884a8,pcVar3);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  pFVar7 = fopen(pcVar10,&DAT_362a6a7c);
  if (pFVar7 != (FILE *)0x0) {
    FUN_3614ffa0(piVar6,pFVar7);
    _unlink(pcVar3);
    return;
  }
  perror(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

