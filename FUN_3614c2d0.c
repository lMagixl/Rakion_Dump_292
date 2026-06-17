
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __cdecl FUN_3614c2d0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  FILE *_File;
  long lVar8;
  int iVar9;
  char *pcVar10;
  char *local_58;
  char local_54 [80];
  undefined4 local_4;
  
  pcVar10 = param_2;
  local_58 = local_54;
  local_4 = DAT_362abd90;
  iVar9 = 9;
  param_2 = (char *)0x0;
  if ((param_1 == (char *)0x0) || (pcVar10 == (char *)0x0)) {
    return (undefined4 *)0x0;
  }
  puVar2 = malloc(0x74);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0x11] = 0;
  *puVar2 = 0;
  puVar2[0x12] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[0x10] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0xffffffff;
  uVar3 = FUN_3614a050(0,(uint *)0x0,0);
  puVar2[0x13] = uVar3;
  puVar2[0x14] = 0;
  puVar2[0x16] = 0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = malloc((size_t)(pcVar4 + (1 - (int)(param_1 + 1))));
  puVar2[0x15] = pcVar5;
  pcVar4 = param_1;
  if (pcVar5 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)(puVar2 + 0x17) = 0;
    do {
      if (*pcVar10 == 'r') {
        *(undefined1 *)(puVar2 + 0x17) = 0x72;
      }
      if ((*pcVar10 == 'w') || (*pcVar10 == 'a')) {
        *(undefined1 *)(puVar2 + 0x17) = 0x77;
      }
      cVar1 = *pcVar10;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        if (cVar1 == 'f') {
          param_2 = (char *)0x1;
        }
        else if (cVar1 == 'h') {
          param_2 = (char *)0x2;
        }
        else if (cVar1 == 'R') {
          param_2 = (char *)0x3;
        }
        else {
          *local_58 = cVar1;
          local_58 = local_58 + 1;
        }
      }
      else {
        iVar9 = cVar1 + -0x30;
      }
      pcVar10 = pcVar10 + 1;
    } while ((cVar1 != '\0') && (local_58 != (char *)&local_4));
    if (*(char *)(puVar2 + 0x17) != '\0') {
      if (*(char *)(puVar2 + 0x17) == 'w') {
        iVar9 = FUN_3614b790((int)puVar2,iVar9,8,-0xf,8,(int)param_2,s_1_2_1_362a6624,0x38);
        pvVar6 = malloc(0x4000);
        puVar2[0x12] = pvVar6;
        puVar2[3] = pvVar6;
        if (iVar9 != 0) goto LAB_3614c451;
      }
      else {
        pvVar6 = malloc(0x4000);
        puVar2[0x11] = pvVar6;
        *puVar2 = pvVar6;
        iVar9 = FUN_3614df20((int)puVar2,0xfffffff1,s_1_2_1_362a662c,0x38);
        if (iVar9 != 0) goto LAB_3614c451;
        pvVar6 = (void *)puVar2[0x11];
      }
      if (pvVar6 != (void *)0x0) {
        puVar2[4] = 0x4000;
        piVar7 = _errno();
        *piVar7 = 0;
        if (param_3 < 0) {
          _File = fopen(param_1,local_54);
        }
        else {
          _File = _fdopen(param_3,local_54);
        }
        puVar2[0x10] = _File;
        if (_File != (FILE *)0x0) {
          if (*(char *)(puVar2 + 0x17) != 'w') {
            FUN_3614bad0();
            lVar8 = ftell((FILE *)puVar2[0x10]);
            puVar2[0x18] = lVar8 - puVar2[1];
            return puVar2;
          }
          fprintf(_File,s__c_c_c_c_c_c_c_c_c_c_362a6634,0x1f,0x8b,8,0,0,0,0,0,0,0xb);
          puVar2[0x18] = 10;
          return puVar2;
        }
      }
    }
  }
LAB_3614c451:
  FUN_3614bc30();
  return (undefined4 *)0x0;
}

