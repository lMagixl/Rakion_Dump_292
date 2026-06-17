
/* public: void __thiscall Xenesis::xFileManager::close(class std::auto_ptr<class Xenesis::xFile>)
    */

void __thiscall Xenesis::xFileManager::close(xFileManager *this,xFile *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a55c0  4144
                       ?close@xFileManager@Xenesis@@QAEXV?$auto_ptr@VxFile@Xenesis@@@std@@@Z */
  puStack_8 = &LAB_3621b94c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_2[0x14] == (xFile)0x0) {
    ExceptionList = &local_c;
    xFile::close(param_2);
    iVar1 = *(int *)(param_2 + 0x20);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      uVar3 = *(uint *)(iVar1 + 8);
    }
    else {
      uVar3 = *(uint *)(iVar1 + 0xc);
    }
    uVar2 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar2 + uVar3;
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + (uint)CARRY4(uVar2,uVar3);
    this[0x10ed] = (xFileManager)0x0;
  }
  FUN_36018d70((undefined4 *)(param_2 + 0x18));
  operator_delete(param_2);
  ExceptionList = local_c;
  return;
}

