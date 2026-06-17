
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_36194b90(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined2 local_2004;
  undefined4 local_2002 [1023];
  char local_1004 [4096];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  Sleep(1);
  do {
    if (DAT_36381b08 == 0) {
      return;
    }
    uVar2 = recv(DAT_36381b08,local_1004,0x1000,0);
    if ((int)uVar2 < 1) {
      iVar3 = WSAGetLastError();
      if (iVar3 != 0x2733) {
        closesocket(DAT_36381b08);
        DAT_36381b08 = 0;
        puVar4 = (undefined4 *)FUN_361bf99c(0x1008);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *(undefined2 *)((int)puVar4 + 2) = 0;
          puVar4[0x401] = 0;
        }
        *(undefined2 *)puVar4 = 0;
        lstrcpyA((LPSTR)(puVar4 + 1),s_I_This_is_really_really_disconne_36242f4a + 2);
        iVar3 = lstrlenA((LPCSTR)(puVar4 + 1));
        *(short *)((int)puVar4 + 2) = (short)iVar3 + 1;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
        puVar5 = puVar4;
        if (DAT_36371ab0 != (undefined4 *)0x0) {
          DAT_36371ab0[0x401] = puVar4;
          puVar5 = DAT_36371ab4;
        }
        DAT_36371ab4 = puVar5;
        DAT_36371ab0 = puVar4;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
        return;
      }
    }
    else {
      pcVar9 = local_1004;
      pcVar11 = (char *)((int)&DAT_3637db00 + (uint)DAT_3637daf8);
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      uVar7 = DAT_3637daf8 + (short)uVar2;
      for (uVar2 = uVar2 & 3; DAT_3637daf8 = uVar7, uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      while (3 < uVar7) {
        uVar1 = (ushort)DAT_3637db00;
        if (uVar7 < uVar1) break;
        uVar8 = DAT_3637db00 & 0xffff;
        uVar2 = uVar8 - 2;
        uVar6 = ((int)(uVar2 + ((int)uVar2 >> 0x1f & 0xfU)) >> 4) * 0xc;
        FUN_36194a60(DAT_36372ae8,(uint *)((int)&DAT_3637db00 + 2),uVar2,(undefined4 *)&local_2004,
                     uVar6 & 0xffff);
        puVar5 = (undefined4 *)FUN_361bf99c(0x1008);
        puVar4 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined2 *)((int)puVar5 + 2) = 0;
          puVar5[0x401] = 0;
          puVar4 = puVar5;
        }
        uVar6 = uVar6 - 2;
        *(short *)((int)puVar4 + 2) = (short)uVar6;
        *(undefined2 *)puVar4 = local_2004;
        puVar10 = local_2002;
        puVar5 = puVar4;
        for (uVar2 = (uVar6 & 0xffff) >> 2; puVar5 = puVar5 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar10;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
        puVar5 = puVar4;
        if (DAT_36371ab0 != (undefined4 *)0x0) {
          DAT_36371ab0[0x401] = puVar4;
          puVar5 = DAT_36371ab4;
        }
        DAT_36371ab4 = puVar5;
        DAT_36371ab0 = puVar4;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
        uVar7 = DAT_3637daf8 - uVar1;
        puVar4 = (undefined4 *)((int)&DAT_3637db00 + uVar8);
        puVar5 = &DAT_3637db00;
        for (uVar2 = (uint)(uVar7 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        DAT_3637daf8 = uVar7;
        for (uVar2 = uVar7 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
    }
    Sleep(1);
  } while( true );
}

