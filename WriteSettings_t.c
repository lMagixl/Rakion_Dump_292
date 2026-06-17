
/* public: void __thiscall MappingSurface::WriteSettings_t(class CTStream *) */

void __thiscall MappingSurface::WriteSettings_t(MappingSurface *this,CTStream *param_1)

{
  int iVar1;
  
                    /* 0xb50c0  3988  ?WriteSettings_t@MappingSurface@@QAEXPAVCTStream@@@Z */
  ::operator<<(param_1,(CTString *)this);
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(this + 0x4c);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x50);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x48);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x30);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x34);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x38);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x3c);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x40);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(this + 0x44);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  return;
}

