
/* public: void __thiscall MappingSurface::ReadSettings_t(class CTStream *) */

void __thiscall MappingSurface::ReadSettings_t(MappingSurface *this,CTStream *param_1)

{
  int iVar1;
  
                    /* 0xb5160  2985  ?ReadSettings_t@MappingSurface@@QAEXPAVCTStream@@@Z */
  ::operator>>(param_1,(CTString *)this);
  *(undefined4 *)(this + 0x4c) = **(undefined4 **)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(iVar1 + 4);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  return;
}

