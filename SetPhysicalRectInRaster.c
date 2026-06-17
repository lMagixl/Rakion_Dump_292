
/* public: void __thiscall CDrawPort::SetPhysicalRectInRaster(class AABBox<long,2> const &) */

void __thiscall CDrawPort::SetPhysicalRectInRaster(CDrawPort *this,AABBox<long,2> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x65760  3550  ?SetPhysicalRectInRaster@CDrawPort@@QAEXABV?$AABBox@J$01@@@Z
                        */
  iVar5 = *(int *)param_1;
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(this + 0x18);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = iVar1;
  if ((iVar1 <= iVar5) && (iVar3 = iVar5, *(int *)(this + 0x20) < iVar5)) {
    iVar3 = *(int *)(this + 0x20);
  }
  iVar5 = *(int *)(this + 0x1c);
  if ((iVar6 < iVar5) || (iVar5 = *(int *)(this + 0x24), iVar5 < iVar6)) {
    iVar6 = iVar5;
  }
  if ((iVar4 < iVar1) || (iVar1 = *(int *)(this + 0x20), *(int *)(this + 0x20) < iVar4)) {
    iVar4 = iVar1;
  }
  iVar5 = *(int *)(this + 0x1c);
  if ((iVar2 < *(int *)(this + 0x1c)) ||
     (iVar5 = *(int *)(this + 0x24), *(int *)(this + 0x24) < iVar2)) {
    iVar2 = iVar5;
  }
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  if (iVar2 < iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(this + 0x1c) = iVar6;
  *(int *)(this + 0x20) = iVar4;
  *(int *)(this + 0x18) = iVar3;
  *(int *)(this + 0x24) = iVar2;
  return;
}

