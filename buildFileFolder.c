
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class std::basic_string<char,struct Xenesis::Private::xaichar_traits,class
   Xenesis::xAllocator<char> > __thiscall Xenesis::xFileManager::buildFileFolder(struct
   Xenesis::xFileManager::xFolder &,unsigned char * &) */

xFolder * __thiscall
Xenesis::xFileManager::buildFileFolder(xFileManager *this,xFolder *param_1,uchar **param_2)

{
  byte bVar1;
  _String_base _Var2;
  ushort *puVar3;
  int iVar4;
  void *pvVar5;
  _String_base *p_Var6;
  undefined4 *puVar7;
  uchar **ppuVar8;
  _String_base *p_Var9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  _String_base *p_Var13;
  int *in_stack_0000000c;
  xFolder local_6c [4];
  void *local_68;
  undefined4 local_58;
  uint local_54;
  _String_base local_50 [64];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a5e90  4132
                       ?buildFileFolder@xFileManager@Xenesis@@AAE?AV?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@AAUxFolder@12@AAPAE@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ba4c;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  puVar3 = (ushort *)*in_stack_0000000c;
  uVar10 = (uint)*puVar3;
  ExceptionList = &local_c;
  *in_stack_0000000c = (int)(puVar3 + 1);
  bVar1 = (byte)puVar3[1];
  uVar12 = (uint)bVar1;
  p_Var6 = (_String_base *)((int)puVar3 + 3);
  *in_stack_0000000c = (int)p_Var6;
  p_Var9 = p_Var6;
  p_Var13 = local_50;
  for (uVar11 = (uint)(bVar1 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)p_Var13 = *(undefined4 *)p_Var9;
    p_Var9 = p_Var9 + 4;
    p_Var13 = p_Var13 + 4;
  }
  for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *p_Var13 = *p_Var9;
    p_Var9 = p_Var9 + 1;
    p_Var13 = p_Var13 + 1;
  }
  *in_stack_0000000c = (int)(p_Var6 + uVar12);
  param_2[6] = (uchar *)0x0;
  param_2[7] = (uchar *)0x0;
  local_50[uVar12] = (_String_base)0x0;
  puVar7 = (undefined4 *)*in_stack_0000000c;
  param_2[6] = (uchar *)*puVar7;
  *(undefined2 *)(param_2 + 7) = *(undefined2 *)(puVar7 + 1);
  iVar4 = *in_stack_0000000c;
  *in_stack_0000000c = iVar4 + 6;
  param_2[8] = *(uchar **)(iVar4 + 6);
  iVar4 = *in_stack_0000000c;
  *in_stack_0000000c = iVar4 + 4;
  param_2[9] = *(uchar **)(iVar4 + 4);
  iVar4 = *in_stack_0000000c;
  *in_stack_0000000c = iVar4 + 4;
  *(char *)(param_2 + 10) = '\x01' - ((*(byte *)(iVar4 + 4) & 1) != 1);
  *(bool *)((int)param_2 + 0x29) = (*(byte *)*in_stack_0000000c & 2) == 2;
  *in_stack_0000000c = *in_stack_0000000c + 1;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    puVar7 = (undefined4 *)FUN_361bf99c(0x30);
    local_4 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      ppuVar8 = (uchar **)0x0;
    }
    else {
      ppuVar8 = (uchar **)FUN_361a5d00(puVar7);
    }
    local_4 = 0xffffffff;
    p_Var9 = (_String_base *)buildFileFolder(this,local_6c,ppuVar8);
    local_4 = 1;
    FUN_3601ee60(param_2,p_Var9,(int)ppuVar8);
    pvVar5 = local_68;
    local_4 = 0xffffffff;
    if (0xf < local_54) {
      FUN_36018c30();
      operator_delete(pvVar5);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = (void *)((uint)local_68 & 0xffffff00);
  }
  p_Var9 = local_50;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (xFolder)0x0;
  do {
    _Var2 = *p_Var9;
    p_Var9 = p_Var9 + 1;
  } while (_Var2 != (_String_base)0x0);
  FUN_3601df80(param_1,local_50,(int)p_Var9 - (int)(local_50 + 1));
  ExceptionList = local_c;
  return param_1;
}

