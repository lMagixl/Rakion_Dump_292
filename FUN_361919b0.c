
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_361919b0(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char local_1010 [4100];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  Sleep(1);
  if (DAT_36371aa0 == 0) {
    return;
  }
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
    if ((ushort)DAT_36363a8c == (ushort)DAT_36363a88) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
    }
    else {
      if ((ushort)DAT_36363a8c < (ushort)DAT_36363a88) {
        uVar5 = DAT_36363a88 - DAT_36363a8c;
        if (0x1000 < (ushort)uVar5) {
          uVar5 = 0x1000;
        }
        pcVar6 = (char *)((int)&DAT_36363a90 + (DAT_36363a8c & 0xffff));
        pcVar8 = local_1010;
        for (uVar3 = (uVar5 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        uVar3 = uVar5 & 3;
        uVar7 = (uint)(ushort)((ushort)DAT_36363a8c + (short)uVar5);
LAB_36191af9:
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
        DAT_36363a8c = CONCAT22(DAT_36363a8c._2_2_,(short)uVar7);
      }
      else {
        uVar3 = 0xa000 - DAT_36363a8c;
        pcVar6 = (char *)((int)&DAT_36363a90 + (DAT_36363a8c & 0xffff));
        if ((ushort)uVar3 < 0x1001) {
          pcVar8 = local_1010;
          for (uVar5 = (uVar3 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar8 = pcVar8 + 4;
          }
          uVar5 = DAT_36363a88 + uVar3;
          for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar8 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar8 = pcVar8 + 1;
          }
          uVar7 = DAT_36363a88;
          if (0x1000 < (ushort)uVar5) {
            uVar5 = 0x1000;
            uVar7 = 0x1000 - uVar3;
          }
          pcVar6 = (char *)&DAT_36363a90;
          pcVar8 = local_1010 + (uVar3 & 0xffff);
          for (uVar4 = (uVar7 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar8 = pcVar8 + 4;
          }
          uVar3 = uVar7 & 3;
          goto LAB_36191af9;
        }
        uVar5 = 0x1000;
        uVar1 = (ushort)DAT_36363a8c + 0x1000;
        pcVar8 = local_1010;
        for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        DAT_36363a8c = CONCAT22(DAT_36363a8c._2_2_,uVar1);
        if (0x9fff < uVar1) {
          DAT_36363a8c = (uint)DAT_36363a8c._2_2_ << 0x10;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
      uVar7 = 0;
      uVar3 = uVar5;
      while( true ) {
        iVar2 = send(DAT_36371aa0,local_1010 + (uVar7 & 0xffff),uVar3 & 0xffff,0);
        if (iVar2 == -1) {
          IScavengerBrokerNet::Disconnect(DAT_3636fa98);
          return;
        }
        uVar7 = uVar7 + iVar2;
        if ((ushort)uVar5 <= (ushort)uVar7) break;
        uVar3 = uVar5 - uVar7;
      }
    }
    Sleep(1);
    if (DAT_36371aa0 == 0) {
      return;
    }
  } while( true );
}

