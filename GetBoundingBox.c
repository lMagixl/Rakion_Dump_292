
/* public: void __thiscall CEntity::GetBoundingBox(class AABBox<float,3> &) */

void __thiscall CEntity::GetBoundingBox(CEntity *this,AABBox<float,3> *param_1)

{
  int iVar1;
  
                    /* 0x129930  1738  ?GetBoundingBox@CEntity@@QAEXAAV?$AABBox@M$02@@@Z */
  iVar1 = *(int *)(this + 0x84);
  if (iVar1 != 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x2c);
    return;
  }
  GetSize(this,param_1);
  *(float *)param_1 = *(float *)(this + 0x3c) + *(float *)param_1;
  *(float *)(param_1 + 4) = *(float *)(this + 0x40) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = *(float *)(this + 0x44) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + *(float *)(this + 0x3c);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(this + 0x40);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(this + 0x44);
  return;
}

