
/* public: void __thiscall CEntity::Initialize_internal(class CEntityEvent const &) */

void __thiscall CEntity::Initialize_internal(CEntity *this,CEntityEvent *param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x124a30  2340  ?Initialize_internal@CEntity@@QAEXABVCEntityEvent@@@Z */
  uVar1 = *(uint *)(this + 0x10);
  (**(code **)(*(int *)this + 0x3c))(param_1);
  if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 8)) {
    if ((uVar1 & 2) == 0) {
      if ((*(uint *)(this + 0x10) & 2) == 0) goto LAB_36124a82;
      CBrush3D::SwitchToZoning(*(CBrush3D **)(this + 0x7c));
    }
    else {
      if ((*(uint *)(this + 0x10) & 2) != 0) goto LAB_36124a82;
      CBrush3D::SwitchToNonZoning(*(CBrush3D **)(this + 0x7c));
    }
    FUN_360325c0((undefined4 *)(this + 0xac));
  }
LAB_36124a82:
  iVar2 = (**(code **)(*(int *)this + 0xf0))();
  if (iVar2 != 0) {
    *(int *)(*(int *)(this + 0x7c) + 0x66c) = iVar2;
  }
  return;
}

