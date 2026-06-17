
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __thiscall CNet::PacketBufferRecvUpdate(void) */

void __thiscall CNet::PacketBufferRecvUpdate(CNet *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 extraout_var;
  int iVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  undefined2 extraout_var_00;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  void *pvVar13;
  byte bStack_832;
  byte local_831;
  void *local_830;
  uint local_82c;
  sockaddr_in local_828 [2];
  ushort local_826;
  undefined2 local_824;
  undefined2 uStack_822;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 auStack_808 [2];
  short local_800 [3];
  byte local_7fa [2];
  undefined4 local_7f8;
  undefined1 uStack_7f2;
  undefined4 uStack_7f1;
  undefined1 uStack_7ed;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 auStack_408 [251];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* 0x104e50  2737  ?PacketBufferRecvUpdate@CNet@@AAEXXZ */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_362177fd;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  ExceptionList = &local_14;
  uVar4 = RecvFrom(this,local_800,local_828);
  uVar10 = CONCAT22(extraout_var,uVar4);
  do {
    if (uVar4 < 7) {
      ExceptionList = local_14;
      return;
    }
    local_82c = uVar10;
    if (_pRakionWorldNet == (IScavengerWorldNet *)0x0) goto LAB_3610538d;
    if ((CONCAT22(uStack_822,local_824) == *(int *)(this + 0x30)) &&
       (local_826 == *(ushort *)(this + 0x36))) {
      uVar8 = uVar10 & 0xffff;
      puVar6 = &local_7f8;
      psVar12 = local_800;
      for (uVar9 = uVar8 - 8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)psVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        psVar12 = psVar12 + 2;
      }
      for (uVar9 = uVar8 - 8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)psVar12 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        psVar12 = (short *)((int)psVar12 + 1);
      }
      *(undefined4 *)((int)auStack_808 + uVar8) = 0;
      *(undefined4 *)((int)auStack_808 + uVar8 + 4) = 0;
    }
    local_830 = (void *)CONCAT22(local_800[1],local_800[0]);
    if (local_800[0] < 0) {
      uVar2 = CONCAT22(local_800[2],local_800[1]);
      local_831 = local_7fa[0];
      iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
      bStack_832 = *(byte *)(iVar5 + 0x475c);
      bVar3 = 0;
      if ((local_831 < 0x14) &&
         (iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))(),
         *(int *)(iVar5 + 0x1d8 + (uint)local_831 * 0x37c) == 1)) {
        GetRelayHeader(this,&local_831,(uchar *)&uStack_818);
        uStack_410 = uStack_818;
        uStack_40c = uStack_814;
        puVar6 = auStack_408;
        bVar3 = 1;
      }
      else {
        puVar6 = &uStack_410;
      }
      uVar1 = *(undefined4 *)(this + 4);
      *(byte *)((int)puVar6 + 6) = bStack_832;
      *(undefined4 *)((int)puVar6 + 7) = uVar2;
      pvVar13 = (void *)0x0;
      *(undefined4 *)((int)puVar6 + 2) = uVar1;
      *(undefined2 *)puVar6 = 0x4000;
      SendTo(this,(char *)&uStack_410,(ushort)bVar3 * 8 + 0xb,CONCAT22(uStack_822,local_824),
             local_826);
      local_800[0] = (short)local_830 + -0x8000;
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      local_830 = (void *)FUN_361bf99c(0x414);
      uStack_c = 0;
      if (local_830 != (void *)0x0) {
        pvVar13 = (void *)FUN_36105b50(local_830,1,CONCAT22(uStack_822,local_824),local_826);
      }
LAB_36105339:
      if ((CONCAT22(uStack_822,local_824) == *(int *)(this + 0x30)) &&
         (local_826 == *(ushort *)(this + 0x36))) {
        *(undefined4 *)((int)pvVar13 + 0x408) = 1;
      }
      goto LAB_3610536c;
    }
    if (local_800[0] == 0x4000) {
      local_830 = (void *)CONCAT13(local_7f8._2_1_,CONCAT21((undefined2)local_7f8,local_7fa[1]));
      bStack_832 = local_7fa[0];
      if (local_7fa[0] < 0x14) {
        EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
        uVar10 = (uint)bStack_832;
        iVar5 = FUN_36105e30((int *)(*(int *)(this + 0xc) + uVar10 * 8));
        if ((((iVar5 != 0) && (pvVar13 = (void *)FUN_36105d00(iVar5), pvVar13 == local_830)) &&
            (*(int *)(iVar5 + 0x400) == CONCAT22(uStack_822,local_824))) &&
           (*(ushort *)(iVar5 + 0x404) == local_826)) {
          FUN_36105e60((undefined4 *)(*(int *)(this + 0xc) + uVar10 * 8));
        }
LAB_36105387:
        LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
      }
    }
    else if (local_800[0] == 0x304) {
      local_831 = local_7fa[0];
      iVar11 = 0;
      iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
      bStack_832 = *(byte *)(iVar5 + 0x475c);
      if ((local_831 < 0x14) &&
         (iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))(),
         *(int *)(iVar5 + 0x1d8 + (uint)local_831 * 0x37c) == 1)) {
        uStack_7f1 = CONCAT13(local_7f8._2_1_,CONCAT21((undefined2)local_7f8,local_7fa[1]));
        uStack_7ed = local_7f8._3_1_;
        GetRelayHeader(this,&local_831,(uchar *)&uStack_810);
        local_800[0] = (short)uStack_810;
        local_800[1] = (short)((uint)uStack_810 >> 0x10);
        local_800[2] = (short)uStack_80c;
        local_7fa[0] = (byte)((uint)uStack_80c >> 0x10);
        local_7fa[1] = (byte)((uint)uStack_80c >> 0x18);
        iVar11 = 8;
      }
      local_7fa[iVar11] = bStack_832;
      *(undefined2 *)((int)local_800 + iVar11) = 0x305;
      SendTo(this,(char *)local_800,(short)iVar11 + (short)uVar10,CONCAT22(uStack_822,local_824),
             local_826);
    }
    else {
      if (local_800[0] == 0x305) {
        iVar5 = CONCAT13(local_7f8._3_1_,CONCAT12(local_7f8._2_1_,(undefined2)local_7f8));
        DVar7 = timeGetTime();
        iVar5 = DVar7 - iVar5;
        local_7f8._0_2_ = (undefined2)iVar5;
        local_7f8._2_1_ = (undefined1)((uint)iVar5 >> 0x10);
        local_7f8._3_1_ = (undefined1)((uint)iVar5 >> 0x18);
        local_830 = (void *)FUN_361bf99c(0x414);
        uStack_c = 1;
        if (local_830 == (void *)0x0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = (void *)FUN_36105b50(local_830,0,CONCAT22(uStack_822,local_824),local_826);
        }
        if ((CONCAT22(uStack_822,local_824) == *(int *)(this + 0x30)) &&
           (local_826 == *(ushort *)(this + 0x36))) {
          *(undefined4 *)((int)pvVar13 + 0x408) = 1;
        }
LAB_3610536c:
        uStack_c = 0xffffffff;
        FUN_36105d40(pvVar13,(undefined4 *)local_800,(ushort)local_82c);
        EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
        FUN_36105de0(*(void **)(this + 8),pvVar13);
        goto LAB_36105387;
      }
      if (local_800[0] == 0x319) {
        bStack_832 = local_7fa[1];
        if ((local_7fa[1] < 0x14) &&
           (iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))(), iVar5 != 0)) {
          iVar5 = iVar5 + (uint)bStack_832 * 0x37c;
          *(uint *)(iVar5 + 0x1e8) = CONCAT22(uStack_822,local_824);
          *(ushort *)(iVar5 + 0x1ec) = local_826;
        }
      }
      else {
        if (local_800[0] == 0x203) {
          local_830 = (void *)FUN_361bf99c(0x414);
          uStack_c = 2;
          if (local_830 == (void *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (void *)FUN_36105b50(local_830,0,CONCAT22(uStack_822,local_824),local_826);
          }
          goto LAB_3610536c;
        }
        if (local_800[0] != 0x504) {
          local_830 = (void *)FUN_361bf99c(0x414);
          uStack_c = 3;
          if (local_830 == (void *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (void *)FUN_36105b50(local_830,0,CONCAT22(uStack_822,local_824),local_826);
          }
          goto LAB_36105339;
        }
        bStack_832 = local_7fa[0];
        local_831 = local_7fa[1];
        GetRelayHeader(this,&bStack_832,(uchar *)auStack_808);
        local_800[0] = (short)auStack_808[0];
        local_800[1] = (short)((uint)auStack_808[0] >> 0x10);
        local_800[2] = (short)auStack_808[1];
        local_7fa[0] = (byte)((uint)auStack_808[1] >> 0x10);
        local_7fa[1] = (byte)((uint)auStack_808[1] >> 0x18);
        local_7f8._0_2_ = 0x505;
        iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
        uStack_7f2 = *(undefined1 *)(iVar5 + 0x475c);
        uStack_7f1 = CONCAT31(uStack_7f1._1_3_,local_831);
        SendTo(this,(char *)local_800,0x10,CONCAT22(uStack_822,local_824),local_826);
      }
    }
LAB_3610538d:
    uVar4 = RecvFrom(this,local_800,local_828);
    uVar10 = CONCAT22(extraout_var_00,uVar4);
  } while( true );
}

