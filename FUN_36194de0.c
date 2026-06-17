
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36194de0(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_1010 [4100];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  Sleep(1);
  do {
    if (DAT_36381b08 == 0) {
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
    if (DAT_36373af4 == (ushort)DAT_36373af0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
    }
    else {
      if (DAT_36373af4 < (ushort)DAT_36373af0) {
        uVar6 = DAT_36373af0 - _DAT_36373af4;
        if (0x1000 < (ushort)uVar6) {
          uVar6 = 0x1000;
        }
        pcVar7 = (char *)((int)&DAT_36373af8 + (_DAT_36373af4 & 0xffff));
        pcVar8 = local_1010;
        for (uVar3 = (uVar6 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        uVar3 = uVar6 & 3;
        uVar4 = (uint)(ushort)(DAT_36373af4 + (short)uVar6);
LAB_36194f08:
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        _DAT_36373af4 = CONCAT22(DAT_36373af4_2,(short)uVar4);
      }
      else {
        uVar3 = 0xa000 - _DAT_36373af4;
        pcVar7 = (char *)((int)&DAT_36373af8 + (_DAT_36373af4 & 0xffff));
        if ((ushort)uVar3 < 0x1001) {
          pcVar8 = local_1010;
          for (uVar6 = (uVar3 & 0xffff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          uVar6 = DAT_36373af0 + uVar3;
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          uVar4 = DAT_36373af0;
          if (0x1000 < (ushort)uVar6) {
            uVar6 = 0x1000;
            uVar4 = 0x1000 - uVar3;
          }
          pcVar7 = (char *)&DAT_36373af8;
          pcVar8 = local_1010 + (uVar3 & 0xffff);
          for (uVar5 = (uVar4 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          uVar3 = uVar4 & 3;
          goto LAB_36194f08;
        }
        uVar6 = 0x1000;
        uVar1 = DAT_36373af4 + 0x1000;
        pcVar8 = local_1010;
        for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        _DAT_36373af4 = CONCAT22(DAT_36373af4_2,uVar1);
        if (0x9fff < uVar1) {
          _DAT_36373af4 = (uint)DAT_36373af4_2 << 0x10;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
      uVar3 = 0;
      iVar2 = send(DAT_36381b08,local_1010,uVar6 & 0xffff,0);
      while (iVar2 != -1) {
        uVar3 = uVar3 + iVar2;
        if ((ushort)uVar6 <= (ushort)uVar3) goto LAB_36194f72;
        iVar2 = send(DAT_36381b08,local_1010 + (uVar3 & 0xffff),uVar6 - uVar3 & 0xffff,0);
      }
      (**(code **)(*DAT_3637fb00 + 0x14))();
    }
LAB_36194f72:
    Sleep(1);
  } while( true );
}

