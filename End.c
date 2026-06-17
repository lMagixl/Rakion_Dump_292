
/* public: void __thiscall CEntity::End(void) */

void __thiscall CEntity::End(CEntity *this)

{
  CLastPositions *this_00;
  CModelObject *this_01;
  CShadingInfo *this_02;
  int iVar1;
  undefined4 auStack_18 [6];
  
  (**(code **)(*(int *)this + 0x40))();
  this_00 = *(CLastPositions **)(this + 0xa4);
  if (this_00 != (CLastPositions *)0x0) {
    CLastPositions::~CLastPositions(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0xa4) = 0;
  }
  *(undefined4 *)(this + 0x88) = 0xbf800000;
  iVar1 = 1;
  do {
    *(undefined4 *)(&stack0xffffffe4 + iVar1 * 4) = 0x7f61b1e6;
    auStack_18[iVar1 + 2] = 0xff61b1e6;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined4 *)(this + 0x8c) = auStack_18[0];
  *(undefined4 *)(this + 0x90) = auStack_18[1];
  *(undefined4 *)(this + 0x94) = auStack_18[2];
  *(undefined4 *)(this + 0x98) = auStack_18[3];
  *(undefined4 *)(this + 0x9c) = auStack_18[4];
  *(undefined4 *)(this + 0xa0) = auStack_18[5];
  switch(*(undefined4 *)(this + 4)) {
  case 3:
  case 5:
    this_01 = *(CModelObject **)(this + 0x7c);
    if (this_01 != (CModelObject *)0x0) {
      CModelObject::~CModelObject(this_01);
      operator_delete(this_01);
    }
    DiscardCollisionInfo(this);
    *(undefined4 *)(this + 0x7c) = 0;
    break;
  case 9:
  case 10:
    DeleteModelInstance(*(CModelInstance **)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
    break;
  case 0xb:
    *(uint *)(*(int *)(this + 0x7c) + 8) = *(uint *)(*(int *)(this + 0x7c) + 8) & 0xfffffdff;
  }
  this_02 = *(CShadingInfo **)(this + 0x80);
  if (this_02 != (CShadingInfo *)0x0) {
    CShadingInfo::~CShadingInfo(this_02);
    operator_delete(this_02);
    *(undefined4 *)(this + 0x80) = 0;
  }
  DiscardCollisionInfo(this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 2;
  return;
}

