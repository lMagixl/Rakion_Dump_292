
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_3619bc30(char *param_1)

{
  xEncryptMemory *pxVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint *puVar5;
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [852];
  undefined4 uStack_3bc;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char local_39c [4];
  uint local_398;
  undefined4 local_394;
  undefined1 *local_390;
  char local_38c [2];
  undefined2 local_38a;
  undefined4 uStack_388;
  uint local_384;
  CHAR local_37c [13];
  CHAR local_36f [13];
  char local_362;
  undefined4 local_35c;
  undefined4 local_358;
  undefined2 local_354;
  undefined2 local_352;
  char local_34a;
  char local_349;
  char local_348;
  undefined2 local_33c [4];
  uint local_334 [201];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b32c;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_398 = local_398 & 0xffffff00;
  ExceptionList = &pvStack_c;
  FUN_3619d0e0(local_38c);
  local_4 = 0;
  FUN_3619cb30(local_38c);
  local_394 = CONCAT31(local_394._1_3_,*param_1);
  if (*param_1 == '\0') {
    local_38c[0] = param_1[2];
    local_38a = *(undefined2 *)(param_1 + 3);
    uVar8 = 1;
    pcVar7 = local_39c;
    local_398 = CONCAT31(local_398._1_3_,param_1[1]);
    local_39c[0] = param_1[5];
    uStack_3bc = 0x3619bcbe;
    pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
    uStack_3bc = 0x3619bcc5;
    FUN_3600ce60(pxVar1,local_384,(int)pcVar7,uVar8);
    lstrcpyA(local_37c,param_1 + 6);
    iVar2 = lstrlenA(local_37c);
    lstrcpyA(local_36f,param_1 + (iVar2 + 7U & 0xffff));
    iVar3 = lstrlenA(local_36f);
    uVar8 = iVar2 + 8 + iVar3;
    local_362 = param_1[uVar8 & 0xffff];
    local_35c = *(undefined4 *)(param_1 + (uVar8 + 1 & 0xffff));
    local_354 = *(undefined2 *)(param_1 + (uVar8 + 5 & 0xffff));
    local_358 = *(undefined4 *)(param_1 + (uVar8 + 7 & 0xffff));
    local_352 = *(undefined2 *)(param_1 + (uVar8 + 0xb & 0xffff));
    local_34a = param_1[uVar8 + 0xd & 0xffff];
    local_349 = param_1[uVar8 + 0xe & 0xffff];
    local_348 = param_1[uVar8 + 0xf & 0xffff];
    uVar8 = uVar8 + 0x10;
    puVar4 = local_33c;
    iVar2 = 0x13;
    do {
      *puVar4 = *(undefined2 *)(param_1 + (uVar8 & 0xffff));
      uVar8 = uVar8 + 2;
      puVar4 = puVar4 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar5 = local_334;
    iVar2 = 0x13;
    do {
      uVar6 = *puVar5;
      local_39c[0] = param_1[uVar8 & 0xffff];
      uVar9 = 1;
      pcVar7 = local_39c;
      uVar8 = uVar8 + 1;
      uStack_3bc = 0x3619bdaa;
      pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
      uStack_3bc = 0x3619bdb1;
      FUN_3600ce60(pxVar1,uVar6,(int)pcVar7,uVar9);
      puVar5 = puVar5 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_390 = auStack_728;
  FUN_3601c310(auStack_728,local_38c);
  (**(code **)(*DAT_3637fb00 + 0x240))(local_394,local_398);
  uStack_388 = 0xffffffff;
  FUN_360195c0((int)auStack_710);
  ExceptionList = local_390;
  return;
}

