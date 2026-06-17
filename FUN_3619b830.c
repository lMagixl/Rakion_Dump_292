
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_3619b830(undefined2 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  xEncryptMemory *pxVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 local_4810 [4];
  int local_480c;
  int local_4808;
  undefined4 local_4804;
  undefined4 local_4800;
  undefined4 local_47fc;
  undefined4 local_47f8;
  undefined4 local_47f4;
  undefined4 local_47f0;
  undefined4 local_47ec;
  undefined4 local_47e8;
  undefined4 local_47e4;
  undefined4 local_47e0;
  undefined4 local_47dc;
  undefined4 local_47d8;
  CHAR local_47d4 [164];
  CHAR local_4730 [164];
  CHAR local_468c [140];
  undefined1 auStack_4600 [64];
  byte local_45c0 [17780];
  void *pvStack_4c;
  undefined4 uStack_44;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b317;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &pvStack_c;
  _eh_vector_constructor_iterator_(local_45c0,0x37c,0x14,FUN_3619d0e0,FUN_360195c0);
  local_47e8 = CONCAT22(local_47e8._2_2_,*param_1);
  local_47f0 = CONCAT31(local_47f0._1_3_,*(undefined1 *)(param_1 + 1));
  local_4800 = CONCAT31(local_4800._1_3_,*(undefined1 *)(param_1 + 2));
  local_47e4 = CONCAT31(local_47e4._1_3_,*(undefined1 *)((int)param_1 + 5));
  local_47f8 = CONCAT31(local_47f8._1_3_,*(undefined1 *)((int)param_1 + 3));
  local_47ec = CONCAT31(local_47ec._1_3_,*(undefined1 *)((int)param_1 + 7));
  local_47dc = CONCAT31(local_47dc._1_3_,*(undefined1 *)(param_1 + 4));
  local_4804 = CONCAT31(local_4804._1_3_,*(undefined1 *)(param_1 + 3));
  local_47d8 = CONCAT31(local_47d8._1_3_,*(undefined1 *)(param_1 + 5));
  local_47fc = CONCAT22(local_47fc._2_2_,*(undefined2 *)((int)param_1 + 0xb));
  local_47f4 = CONCAT31(local_47f4._1_3_,*(undefined1 *)((int)param_1 + 9));
  local_4 = 0;
  local_47e0 = CONCAT31(local_47e0._1_3_,*(undefined1 *)((int)param_1 + 0xd));
  lstrcpyA(local_4730,(LPCSTR)(param_1 + 7));
  iVar2 = lstrlenA(local_4730);
  lstrcpyA(local_47d4,(LPCSTR)((iVar2 + 0xfU & 0xffff) + (int)param_1));
  iVar3 = lstrlenA(local_47d4);
  uVar8 = iVar2 + 0x10 + iVar3;
  lstrcpyA(local_468c,(LPCSTR)((uVar8 & 0xffff) + (int)param_1));
  iVar2 = lstrlenA(local_468c);
  pbVar6 = local_45c0;
  local_4808 = 0x14;
  uVar8 = uVar8 + 1 + iVar2;
  do {
    FUN_3619cb30(pbVar6);
    bVar1 = *(byte *)((uVar8 & 0xffff) + (int)param_1);
    uVar9 = uVar8 + 1;
    *pbVar6 = bVar1;
    if (3 < bVar1) {
      *pbVar6 = bVar1 - 1;
    }
    if ((*pbVar6 != 0) && (*pbVar6 != 4)) {
      *(undefined2 *)(pbVar6 + 2) = *(undefined2 *)((uVar9 & 0xffff) + (int)param_1);
      local_4810[0] = *(undefined1 *)((uVar8 + 3 & 0xffff) + (int)param_1);
      uVar9 = *(uint *)(pbVar6 + 8);
      uVar11 = 1;
      puVar10 = local_4810;
      pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
      FUN_3600ce60(pxVar4,uVar9,(int)puVar10,uVar11);
      lstrcpyA((LPSTR)(pbVar6 + 0x10),(LPCSTR)((uVar8 + 4 & 0xffff) + (int)param_1));
      iVar2 = lstrlenA((LPCSTR)(pbVar6 + 0x10));
      uVar8 = uVar8 + 5 + iVar2;
      lstrcpyA((LPSTR)(pbVar6 + 0x1d),(LPCSTR)((uVar8 & 0xffff) + (int)param_1));
      iVar2 = lstrlenA((LPCSTR)(pbVar6 + 0x1d));
      uVar9 = uVar8 + 1 + iVar2;
      pbVar6[0x2a] = *(byte *)((uVar9 & 0xffff) + (int)param_1);
      *(undefined4 *)(pbVar6 + 0x30) = *(undefined4 *)((uVar9 + 1 & 0xffff) + (int)param_1);
      *(undefined2 *)(pbVar6 + 0x38) = *(undefined2 *)((uVar9 + 5 & 0xffff) + (int)param_1);
      *(undefined4 *)(pbVar6 + 0x34) = *(undefined4 *)((uVar9 + 7 & 0xffff) + (int)param_1);
      *(undefined2 *)(pbVar6 + 0x3a) = *(undefined2 *)((uVar9 + 0xb & 0xffff) + (int)param_1);
      pbVar6[0x42] = *(byte *)((uVar9 + 0xd & 0xffff) + (int)param_1);
      pbVar6[0x43] = *(byte *)((uVar9 + 0xe & 0xffff) + (int)param_1);
      pbVar6[0x44] = *(byte *)((uVar9 + 0xf & 0xffff) + (int)param_1);
      uVar9 = uVar9 + 0x10;
      pbVar5 = pbVar6 + 0x50;
      iVar2 = 0x13;
      do {
        *(undefined2 *)pbVar5 = *(undefined2 *)((uVar9 & 0xffff) + (int)param_1);
        uVar9 = uVar9 + 2;
        pbVar5 = pbVar5 + 0x28;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar7 = (uint *)(pbVar6 + 0x58);
      local_480c = 0x13;
      do {
        uVar8 = *puVar7;
        local_4810[0] = *(undefined1 *)((uVar9 & 0xffff) + (int)param_1);
        uVar11 = 1;
        puVar10 = local_4810;
        uVar9 = uVar9 + 1;
        pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar4,uVar8,(int)puVar10,uVar11);
        puVar7 = puVar7 + 10;
        local_480c = local_480c + -1;
      } while (local_480c != 0);
    }
    pbVar6 = pbVar6 + 0x37c;
    local_4808 = local_4808 + -1;
    uVar8 = uVar9;
  } while (local_4808 != 0);
  (**(code **)(*DAT_3637fb00 + 0x23c))
            (local_47e8,local_47f0,local_47f8,local_4800,local_47e4,local_4804,local_47ec,local_47dc
             ,local_47f4,local_47d8,local_47fc,local_47e0,local_4730,local_47d4,local_468c,
             local_45c0);
  uStack_44 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_4600,0x37c,0x14,FUN_360195c0);
  ExceptionList = pvStack_4c;
  return;
}

