
/* public: void __thiscall CDrawPort::SetLogicalRectInLogical(class AABBox<long,2> const &) */

void __thiscall CDrawPort::SetLogicalRectInLogical(CDrawPort *this,AABBox<long,2> *param_1)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x665b0  3502  ?SetLogicalRectInLogical@CDrawPort@@QAEXABV?$AABBox@J$01@@@Z
                        */
  local_10 = *(int *)param_1 + *(int *)(this + 8);
  local_8 = *(int *)(param_1 + 8) + *(int *)(this + 8);
  local_c = *(int *)(param_1 + 4) + *(int *)(this + 0xc);
  local_4 = *(int *)(param_1 + 0xc) + *(int *)(this + 0xc);
  SetLogicalRectInRaster(this,(AABBox<long,2> *)&local_10);
  return;
}

