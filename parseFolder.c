
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class std::basic_string<char,struct Xenesis::Private::xaichar_traits,class
   Xenesis::xAllocator<char> > __thiscall Xenesis::xFileManager::parseFolder(struct
   Xenesis::xFileManager::xFolder * &,char const *)const  */

xFolder ** __thiscall
Xenesis::xFileManager::parseFolder(xFileManager *this,xFolder **param_1,char *param_2)

{
  _String_base _Var1;
  void *pvVar2;
  char ***pppcVar3;
  _String_base *p_Var4;
  _String_base *p_Var5;
  _String_base **pp_Var6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char ****_Str1;
  _String_base *p_Var10;
  _String_base *p_Var11;
  uint unaff_EDI;
  char cStack0000000c;
  undefined3 uStack0000000d;
  _String_base *local_6c;
  xFileManager *local_68;
  undefined1 local_64 [4];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  _String_base local_48 [4];
  char ***local_44 [4];
  int local_34;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a5710  4262
                       ?parseFolder@xFileManager@Xenesis@@ABE?AV?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@AAPAUxFolder@12@PBD@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b9a1;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  *(undefined4 *)param_2 = *(undefined4 *)(this + 0x78);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  p_Var4 = _cStack0000000c;
  do {
    _Var1 = *p_Var4;
    p_Var4 = p_Var4 + 1;
  } while (_Var1 != (_String_base)0x0);
  local_68 = this;
  FUN_3601df80(local_2c,_cStack0000000c,(int)p_Var4 - (int)(_cStack0000000c + 1));
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  p_Var4 = (_String_base *)0x0;
  do {
    while( true ) {
      while( true ) {
        cStack0000000c = '\\';
        p_Var5 = (_String_base *)FUN_361a6940(local_2c,&stack0x0000000c,(uint)p_Var4,1);
        _cStack0000000c = (_String_base *)CONCAT31(uStack0000000d,0x2f);
        local_6c = p_Var5;
        _cStack0000000c = (_String_base *)FUN_361a6940(local_2c,&stack0x0000000c,(uint)p_Var4,1);
        p_Var10 = _cStack0000000c;
        if ((_cStack0000000c == (_String_base *)0xffffffff) &&
           (p_Var10 = p_Var5, p_Var5 == (_String_base *)0xffffffff)) {
          p_Var4 = FUN_361a7c30(local_2c,local_64,(uint)p_Var4,0xffffffff);
          local_4._0_1_ = 3;
          FUN_3601cb20(local_48,p_Var4,0,0xffffffff,unaff_EDI);
          pvVar2 = local_60;
          local_4._0_1_ = 2;
          if (0xf < local_4c) {
            FUN_36018c30();
            operator_delete(pvVar2);
          }
          param_1[6] = (xFolder *)0xf;
          param_1[5] = (xFolder *)0x0;
          *(undefined1 *)(param_1 + 1) = 0;
          FUN_3601cb20(param_1,local_48,0,0xffffffff,unaff_EDI);
          pppcVar3 = local_44[0];
          local_4._0_1_ = 1;
          if (0xf < local_30) {
            FUN_36018c30();
            operator_delete(pppcVar3);
          }
          pvVar2 = local_28;
          local_30 = 0xf;
          local_34 = 0;
          local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
          local_4 = (uint)local_4._1_3_ << 8;
          if (0xf < local_14) {
            FUN_36018c30();
            operator_delete(pvVar2);
          }
          ExceptionList = local_c;
          return param_1;
        }
        p_Var11 = p_Var10;
        if (p_Var5 != (_String_base *)0xffffffff) {
          pp_Var6 = &local_6c;
          if (p_Var10 <= p_Var5) {
            pp_Var6 = (_String_base **)&stack0x0000000c;
          }
          p_Var11 = *pp_Var6;
        }
        if (p_Var11 != (_String_base *)0x0) break;
        *(xFileManager **)param_2 = local_68 + 0x48;
        p_Var4 = (_String_base *)0x1;
        _cStack0000000c = p_Var10;
      }
      _cStack0000000c = p_Var10;
      p_Var4 = FUN_361a7c30(local_2c,local_64,(uint)p_Var4,(int)p_Var11 - (int)p_Var4);
      local_4._0_1_ = 4;
      FUN_3601cb20(local_48,p_Var4,0,0xffffffff,unaff_EDI);
      pvVar2 = local_60;
      local_4._0_1_ = 2;
      if (0xf < local_4c) {
        FUN_36018c30();
        operator_delete(pvVar2);
      }
      iVar9 = local_34;
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      if (local_34 == 0) break;
      _Str1 = (char ****)local_44[0];
      if (local_30 < 0x10) {
        _Str1 = local_44;
      }
      iVar7 = _strnicmp((char *)_Str1,&DAT_36243694,(uint)(local_34 != 0));
      if (((iVar7 != 0) || (iVar9 == 0)) || (iVar9 != 1)) break;
LAB_361a5924:
      p_Var4 = p_Var11 + 1;
    }
    uVar8 = FUN_3600e4d0(local_48,0,local_34,0x36243698,(char *)0x2,unaff_EDI);
    if (uVar8 != 0) {
      iVar9 = FUN_36019bf0(*(void **)param_2,local_48);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x18) == 0 && *(int *)(iVar9 + 0x1c) == 0)) {
        *(int *)param_2 = iVar9;
      }
      goto LAB_361a5924;
    }
    if (*(int *)(*(int *)param_2 + 4) == 0) goto LAB_361a5924;
    *(int *)param_2 = *(int *)(*(int *)param_2 + 4);
    p_Var4 = p_Var11 + 1;
  } while( true );
}

