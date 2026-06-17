
/* public: class CDrawPort __thiscall CDrawPort::CreateSubDrawPort(class AABBox<long,2> const &) */

AABBox<long,2> * __thiscall CDrawPort::CreateSubDrawPort(CDrawPort *this,AABBox<long,2> *param_1)

{
  int iVar1;
  CDrawPort *pCVar2;
  CDrawPort *pCVar3;
  AABBox<long,2> *pAVar4;
  int *in_stack_00000008;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  CDrawPort local_68 [92];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x66600  1435  ?CreateSubDrawPort@CDrawPort@@QAE?AV1@ABV?$AABBox@J$01@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36211d79;
  local_c = ExceptionList;
  local_78 = *in_stack_00000008;
  pCVar2 = this;
  pCVar3 = local_68;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  local_78 = local_78 + *(int *)(this + 8);
  local_70 = in_stack_00000008[2] + *(int *)(this + 8);
  local_74 = in_stack_00000008[1] + *(int *)(this + 0xc);
  local_6c = in_stack_00000008[3] + *(int *)(this + 0xc);
  ExceptionList = &local_c;
  SetPhysicalRectInRaster(local_68,(AABBox<long,2> *)&local_78);
  SetLogicalRectInRaster(local_68,(AABBox<long,2> *)&local_78);
  pCVar2 = local_68;
  pAVar4 = param_1;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar4 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pAVar4 = pAVar4 + 4;
  }
  ~CDrawPort(local_68);
  ExceptionList = local_c;
  return param_1;
}

