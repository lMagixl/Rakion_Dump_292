
char * __fastcall FUN_361cd3c6(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  char local_114 [256];
  char *local_14;
  char local_d;
  char *local_c;
  char *local_8;
  
  *(undefined4 *)(param_1 + 0x3d8) = 0;
LAB_361cd694:
  while( true ) {
    while( true ) {
      uVar5 = *(uint *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0xc4) <= uVar5) {
        if (uVar5 == *(uint *)(param_1 + 0xc4)) {
          *(uint *)(param_1 + 0xc0) = uVar5 + 1;
          *(undefined4 *)(param_1 + 0x3d8) = 1;
          return (char *)0x10c;
        }
        return (char *)0xffffffff;
      }
      local_d = **(char **)(param_1 + 0xc0);
      if (local_d != '\n') break;
      pcVar2 = *(char **)(param_1 + 0xc0) + 1;
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
      *(char **)(param_1 + 0xc0) = pcVar2;
      *(char **)(param_1 + 0xbc) = pcVar2;
    }
    iVar3 = isspace((int)local_d);
    if (iVar3 == 0) break;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  if (local_d != '#') {
    if (local_d == ';') {
LAB_361cd66a:
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      pcVar2 = *(char **)(param_1 + 0xc0);
      if (pcVar2 < *(char **)(param_1 + 0xc4)) {
        do {
          if (*pcVar2 == '\n') break;
          pcVar2 = pcVar2 + 1;
          *(char **)(param_1 + 0xc0) = pcVar2;
        } while (pcVar2 < *(char **)(param_1 + 0xc4));
      }
    }
    else {
      if (local_d != '/') {
LAB_361cd6cd:
        pcVar2 = (char *)(int)local_d;
        iVar3 = isalpha((int)pcVar2);
        if (iVar3 != 0) {
          puVar8 = *(undefined4 **)(param_1 + 0xc0);
          pcVar2 = (char *)((int)puVar8 + 1);
          *(char **)(param_1 + 0xc0) = pcVar2;
          if (pcVar2 < *(char **)(param_1 + 0xc4)) goto LAB_361cd6f6;
          goto LAB_361cd725;
        }
        iVar3 = isdigit((int)pcVar2);
        pcVar4 = *(char **)(param_1 + 0xc0);
        if (iVar3 == 0) {
          if (*pcVar4 == '+') {
            *(undefined4 *)(param_1 + 0x3d8) = 1;
          }
          *(char **)(param_1 + 0xc0) = pcVar4 + 1;
          return pcVar2;
        }
        pcVar2 = pcVar4 + 1;
        local_c = (char *)0x10a;
        *(char **)(param_1 + 0xc0) = pcVar2;
        if (pcVar2 < *(char **)(param_1 + 0xc4)) goto LAB_361cd800;
        goto LAB_361cd85b;
      }
      pcVar4 = *(char **)(param_1 + 0xc4);
      pcVar2 = (char *)(*(int *)(param_1 + 0xc0) + 1);
      if (pcVar4 <= pcVar2) goto LAB_361cd6cd;
      if (*pcVar2 == '/') goto LAB_361cd66a;
      if ((pcVar4 <= pcVar2) || (*pcVar2 != '*')) goto LAB_361cd6cd;
      pcVar2 = (char *)(*(int *)(param_1 + 0xc0) + 2);
      *(char **)(param_1 + 0xc0) = pcVar2;
      if (pcVar2 < pcVar4) {
        do {
          pcVar2 = *(char **)(param_1 + 0xc0);
          if (((*pcVar2 == '*') && (pcVar2 + 1 < pcVar4)) && (pcVar2[1] == '/')) {
            *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 2;
            goto LAB_361cd694;
          }
          if (*pcVar2 == '\n') {
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
            *(char **)(param_1 + 0xbc) = pcVar2 + 1;
          }
          *(char **)(param_1 + 0xc0) = pcVar2 + 1;
        } while (pcVar2 + 1 < *(char **)(param_1 + 0xc4));
      }
      pcVar2 = s_comment_extends_past_end_of_file_362497a4;
LAB_361cd657:
      FUN_361cc398(param_1,pcVar2);
    }
    goto LAB_361cd694;
  }
  pcVar2 = *(char **)(param_1 + 0xc0);
  if (pcVar2 != *(char **)(param_1 + 0xbc)) goto LAB_361cd6cd;
  pcVar4 = pcVar2 + 1;
  *(char **)(param_1 + 0xc0) = pcVar4;
  if (pcVar4 < *(char **)(param_1 + 0xc4)) {
    do {
      if (*pcVar4 == '\n') break;
      pcVar4 = pcVar4 + 1;
      *(char **)(param_1 + 0xc0) = pcVar4;
    } while (pcVar4 < *(char **)(param_1 + 0xc4));
  }
  local_8 = pcVar2;
  if (5 < (int)pcVar4 - (int)pcVar2) {
    iVar3 = 5;
    bVar11 = true;
    pcVar7 = pcVar2;
    pcVar9 = s__line_362497f4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar11 = *pcVar7 == *pcVar9;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      if (pcVar2 < pcVar4) {
        do {
          iVar3 = isspace((int)*local_8);
          if (iVar3 != 0) break;
          local_8 = local_8 + 1;
        } while (local_8 < *(char **)(param_1 + 0xc0));
      }
      while ((pcVar2 = local_8, local_8 < *(char **)(param_1 + 0xc0) &&
             (iVar3 = isspace((int)*local_8), pcVar2 = local_8, iVar3 != 0))) {
        local_8 = local_8 + 1;
      }
      while ((local_8 < *(char **)(param_1 + 0xc0) && (iVar3 = isspace((int)*local_8), iVar3 == 0)))
      {
        local_8 = local_8 + 1;
      }
      pcVar4 = *(char **)(param_1 + 0xc0);
      local_14 = local_8;
      if (local_8 < pcVar4) {
        do {
          if (*local_14 == '\"') break;
          local_14 = local_14 + 1;
        } while (local_14 < *(char **)(param_1 + 0xc0));
      }
      local_c = local_14;
      if ((local_14 < pcVar4) && (local_c = local_14 + 1, local_c < pcVar4)) {
        do {
          if (*local_c == '\"') break;
          local_c = local_c + 1;
        } while (local_c < *(char **)(param_1 + 0xc0));
      }
      uVar5 = (int)local_8 - (int)pcVar2;
      if (0xff < uVar5) {
        uVar5 = 0xff;
      }
      local_8 = local_c + -(int)local_14;
      if ((char *)0xff < local_c + -(int)local_14) {
        local_8 = (char *)0xff;
      }
      if (uVar5 != 0) {
        pcVar4 = local_114;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_114[uVar5] = '\0';
        iVar3 = atoi(local_114);
        *(int *)(param_1 + 0x1d0) = iVar3 + -1;
      }
      if ((char *)0x1 < local_8) {
        pcVar2 = (char *)(param_1 + 0x1d4);
        pcVar4 = local_14 + 1;
        while (pcVar4 < local_c) {
          cVar1 = *pcVar4;
          pcVar7 = pcVar4 + 1;
          *pcVar2 = cVar1;
          if (((cVar1 == '\\') && (pcVar7 < local_c)) && (*pcVar7 == '\\')) {
            pcVar7 = pcVar4 + 2;
          }
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar7;
        }
        *pcVar2 = '\0';
      }
      goto LAB_361cd694;
    }
  }
  pcVar2 = s_preprocessor_directives_are_not_s_362497c8;
  goto LAB_361cd657;
  while( true ) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    pcVar2 = *(char **)(param_1 + 0xc0);
    if (*(char **)(param_1 + 0xc4) <= pcVar2) break;
LAB_361cd6f6:
    iVar3 = isalnum((int)*pcVar2);
    if ((iVar3 == 0) && (**(char **)(param_1 + 0xc0) != '_')) break;
  }
LAB_361cd725:
  uVar5 = *(int *)(param_1 + 0xc0) - (int)puVar8;
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  puVar10 = (undefined4 *)(param_1 + 200);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(undefined1 *)(uVar5 + 200 + param_1) = 0;
  pcVar2 = (char *)(param_1 + 200);
  iVar3 = 3;
  bVar11 = true;
  *(undefined4 *)(param_1 + 0x3d8) = 1;
  pcVar4 = pcVar2;
  pcVar7 = &DAT_362497a0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar11 = *pcVar4 == *pcVar7;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar11);
  if (bVar11) {
    return (char *)0x101;
  }
  iVar3 = 3;
  bVar11 = true;
  pcVar4 = pcVar2;
  pcVar7 = &DAT_3624979c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar11 = *pcVar4 == *pcVar7;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar11);
  if (bVar11) {
    return (char *)0x102;
  }
  iVar3 = 4;
  bVar11 = true;
  pcVar4 = &DAT_362494cc;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar11 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar11);
  if (bVar11) {
    return (char *)0x103;
  }
  pcVar2 = (char *)FUN_361cc4ce(param_1);
  if (pcVar2 != (char *)0x109) {
    return pcVar2;
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  return (char *)0x109;
LAB_361cd800:
  do {
    iVar3 = isdigit((int)*pcVar2);
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 0xb4) == 0) ||
         ((**(char **)(param_1 + 0xc0) != '.' && (**(char **)(param_1 + 0xc0) != 'e')))) {
        cVar1 = **(char **)(param_1 + 0xc0);
        if (((cVar1 != '+') && (cVar1 != '-')) || ((*(char **)(param_1 + 0xc0))[-1] != 'e')) break;
      }
      local_c = (char *)0x10b;
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    pcVar2 = *(char **)(param_1 + 0xc0);
  } while (pcVar2 < *(char **)(param_1 + 0xc4));
LAB_361cd85b:
  uVar5 = *(int *)(param_1 + 0xc0) - (int)pcVar4;
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  pcVar2 = (char *)(param_1 + 200);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *(undefined1 *)(uVar5 + 200 + param_1) = 0;
  if (((*(int *)(param_1 + 0xb4) != 0) &&
      (pcVar2 = *(char **)(param_1 + 0xc0), pcVar2 < *(char **)(param_1 + 0xc4))) &&
     (*pcVar2 == 'f')) {
    local_c = (char *)0x10b;
    *(char **)(param_1 + 0xc0) = pcVar2 + 1;
  }
  return local_c;
}

