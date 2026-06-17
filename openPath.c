
/* public: class std::auto_ptr<class Xenesis::xFile> __thiscall Xenesis::xFileManager::openPath(char
   const *,bool,bool,bool) */

char * __thiscall
Xenesis::xFileManager::openPath
          (xFileManager *this,char *param_1,bool param_2,bool param_3,bool param_4)

{
  _String_base _Var1;
  bool bVar2;
  void *pvVar3;
  _String_base *p_Var4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined3 in_stack_00000009;
  undefined3 in_stack_0000000d;
  undefined3 in_stack_00000011;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  bVar2 = param_2;
                    /* 0x1a67a0  4259
                       ?openPath@xFileManager@Xenesis@@QAE?AV?$auto_ptr@VxFile@Xenesis@@@std@@PBD_N11@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bb0a;
  local_c = ExceptionList;
  uVar6 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  p_Var4 = (_String_base *)_param_2;
  do {
    _Var1 = *p_Var4;
    p_Var4 = p_Var4 + 1;
  } while (_Var1 != (_String_base)0x0);
  ExceptionList = &local_c;
  FUN_3601df80(local_28,(_String_base *)_param_2,(int)p_Var4 - (int)(_param_2 + 1));
  local_4 = 1;
  FUN_36018b10(this + 0x7c,(undefined4 *)&param_2,local_28);
  pvVar3 = local_24;
  local_4 = local_4 & 0xffffff00;
  if (0xf < local_10) {
    FUN_36018c30();
    operator_delete(pvVar3);
  }
  p_Var4 = (_String_base *)_param_2;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (_param_2 == (xFile *)*(_String_base **)(this + 0x84)) {
    puVar5 = (undefined4 *)open(this,&param_3,bVar2,SUB41(_param_3,0),true,SUB41(_param_4,0));
    pvVar3 = _param_3;
    uVar6 = *puVar5;
    *puVar5 = 0;
    *(undefined4 *)param_1 = uVar6;
    if (_param_3 != (void *)0x0) {
      FUN_36018d70((undefined4 *)((int)_param_3 + 0x18));
      operator_delete(pvVar3);
    }
    ExceptionList = local_c;
    return param_1;
  }
  _param_2 = (xFile *)FUN_361bf99c(0x38);
  local_4 = 2;
  if (_param_2 != (xFile *)0x0) {
    uVar6 = xFile::xFile(_param_2,(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40)
                         ,(XFSFileInfo *)(*(int *)(p_Var4 + 0x24) + 0x18),true,SUB41(_param_3,0),
                         (xBlowFish *)(this + 0xa4),
                         (xBasicDeviceSection<class_Xenesis::xWindowSectionTrait> *)(this + 0x10f0))
    ;
  }
  *(undefined4 *)param_1 = uVar6;
  ExceptionList = local_c;
  return param_1;
}

