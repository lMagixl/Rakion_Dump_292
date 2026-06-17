
/* public: void __thiscall CDrawPort::SetLogicalRectInRaster(class AABBox<long,2> const &) */

void __thiscall CDrawPort::SetLogicalRectInRaster(CDrawPort *this,AABBox<long,2> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x657e0  3504  ?SetLogicalRectInRaster@CDrawPort@@QAEXABV?$AABBox@J$01@@@Z */
  iVar3 = *(int *)param_1;
  if (*(int *)(this + 0x18) < *(int *)param_1) {
    iVar3 = *(int *)(this + 0x18);
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(this + 0x1c) < *(int *)(param_1 + 4)) {
    iVar2 = *(int *)(this + 0x1c);
  }
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < *(int *)(this + 0x20)) {
    iVar4 = *(int *)(this + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < *(int *)(this + 0x24)) {
    iVar1 = *(int *)(this + 0x24);
  }
  *(int *)(this + 0x10) = iVar4;
  *(int *)(this + 8) = iVar3;
  *(int *)(this + 0xc) = iVar2;
  *(int *)(this + 0x14) = iVar1;
  return;
}

