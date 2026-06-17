
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36150070(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  FILE *pFVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_404 + -(int)param_1)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_362a6a38;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  puVar8 = (undefined4 *)&stack0xfffffbfb;
  do {
    pcVar2 = (char *)((int)puVar8 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  } while (*pcVar2 != '\0');
  puVar7 = (undefined4 *)&DAT_362a6a38;
  for (uVar6 = (uint)(pcVar3 + -0x362a6a37) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = (uint)(pcVar3 + -0x362a6a37) & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pFVar4 = fopen(param_1,&DAT_362a6a3c);
  if (pFVar4 == (FILE *)0x0) {
    perror(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  piVar5 = (int *)FUN_3614c550(local_404,param_2);
  if (piVar5 == (int *)0x0) {
    fprintf((FILE *)(_iob_exref + 0x40),s__s__can_t_gzopen__s_362a6a40,DAT_363884a8,local_404);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  FUN_3614feb0(pFVar4,piVar5);
  _unlink(param_1);
  return;
}

